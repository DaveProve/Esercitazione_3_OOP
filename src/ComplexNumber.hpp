#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <iostream>
#include <cmath>
#include <string>

struct Complex{            //Creiamo uno struct di nome Complex con valori double per parte reale e immaginaria
    double re;
    double im;
};


Complex num_compl(double re, double im);                  //Richiamiamo le funzioni e gli operatori definiti nel .cpp
std::string def(const Complex& n);
Complex operator +(const Complex& n1, const Complex& n2);
bool operator ==(const Complex& n1, const Complex& n2);
Complex coniugato(const Complex& n);

#endif

