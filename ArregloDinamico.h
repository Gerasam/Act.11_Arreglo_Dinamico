#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include<iostream>
using namespace std;

#define MAX 5

class ArregloDinamico
{
    string *arreglo;
    size_t tam;
    size_t cont;

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const string &s);
    void insertar_incio(const string &s);
    size_t size();
    string operator[](size_t r)
    {
        return arreglo[r];
    }
private:
    void expandir();
};

#endif