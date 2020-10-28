#include<iostream>
#include "ArregloDinamico.h"

using namespace std;

void mostrar(ArregloDinamico &a);

main()
{
    ArregloDinamico array;
    
    array.insertar_final("1.Uno");
    array.insertar_final("2.Dos");
    array.insertar_final("3.Tres");
    array.insertar_final("4.Cuatro");
    array.insertar_final("5.Cinco");
    array.insertar_final("6.Seis");
    array.insertar_final("7.Siete");
    array.insertar_final("8.Ocho");
    mostrar(array);
    array.insertar_incio("Hola");
    array.insertar_incio("Adios");
    mostrar(array);

    return 0;
}
void mostrar(ArregloDinamico &a)
{
    cout<<endl;
    for (size_t i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
}