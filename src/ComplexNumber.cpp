#include <ComplexNumber.hpp>     // Includiamo le librerie e l'header
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Complex num_compl(double re, double im){    //Definiamo la funzione che sala la parte reale e immaginaria di un complesso
    return {re, im};
}

string def(const Complex& n){   //Esplicitiamo la funzione che definisce e scrive il numero complesso
    ostringstream oss;          //Utilizziamo la categoria string in modo da poter utilizzare l'input dell'utente nel terminale
    if (n.im != 0) {            //E creiamo una serie di if che regoli il comportamento per quando si hanno parte reale e/o immaginaria nulla
        if (n.re != 0)          //O con parte immaginaria positiva
            oss << n.re;
        if (n.im > 0 && n.im !=1 && n.re == 0)
            oss << n.im << "i";
        else if (n.im > 0 && n.im !=1)
            oss << "+" << n.im << "i";
        else if (n.im == 1 && n.re == 0)
            oss << "i";
        else if (n.im == 1)
            oss << "+i";
        else if (n.im == -1)
            oss << "-i";
        else
            oss << n.im << "i";
    }else{
        if (n.re != 0)
            oss << n.re;
        else
            oss << 0;
    }
    return oss.str();
}

Complex operator +(const Complex& n1, const Complex& n2){  //Definiamo l'operatore per la somma tra complessi
    return {n1.re + n2.re, n1.im + n2.im};
}

bool operator==(const Complex& n1, const Complex& n2){    //Definiamo l'operatore per l'uguaglianza tra complessi
    return (n1.re == n2.re) && (n1.im == n2.im);
}

Complex coniugato(const Complex& n){                     //Definiamo la funzione che determina il coniugato
    return {n.re, -n.im};
}
