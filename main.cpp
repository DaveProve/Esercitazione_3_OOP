#include "ComplexNumber.hpp"  //Richiamiamo l'header
using namespace std;

int main() {
    Complex c1,c2;     //Definiamo due numeri complessi

    cout << "Inserire la parte reale del primo numero complesso: ";          //E poi chiediamo all'utente di scrivere i loro valori da terminale
    cin >> c1.re;
    cout << "Inserire la parte immaginaria del primo numero complesso: ";
    cin >> c1.im;

    cout << "Inserire la parte reale del secondo numero complesso: ";
    cin >> c2.re;
    cout << "Inserire la parte immaginaria del secondo numero complesso: ";
    cin >> c2.im;


    cout << "Primo numero complesso (C1): " << def(c1) << endl;            //Stampiamo i numeri
    cout << "Secondo numero complesso (C2): " << def(c2) << endl;


    Complex sum = c1+c2;                                                  //Sommiamo i numeri
    cout << "Somma (C1+C2): " << def(sum) << endl;


    if (c1 == c2)                                                        //Confrontiamo i numeri
        cout << "I due numeri complessi sono uguali" << endl;
    else
        cout << "I due numeri complessi sono diversi" << endl;


    Complex con1 = coniugato(c1);                                        //Esplicitiamo i coniugati
    Complex con2 = coniugato(c2);
    cout << "Coniugato di C1: " << def(con1) << "\n" << "Coniugato di C2: " << def(con2) <<endl;

    return 0;
}
