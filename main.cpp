#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    int basura;
    cout << "El valor de la variable " << basura << endl;
    int numeros[] = {1,4,65,68};
    int tamano = sizeof(numeros) / sizeof(int);

    cout << "Recorriendo el arreglo con un ranged for" << endl;
    for(int numero: numeros)
    {
        cout << numero << endl;
    }

    cout << "Recorriendo el arreglo con un for tradicional" << endl;
    for(int i = 0 ; i < 10; i++ )
    {
        cout << numeros[i] << endl;
    }

    //Enteros
    short corto;
    int entero;
    long largo;

    //Reales
    float decimal;
    double doble;

    bool booleano;
    char caracter = 'A';
    string nombre;
    cout << "¿Cuál es tu nombre? ";
    cin >> nombre;
    cout << "Hola " << nombre << endl;
    return EXIT_SUCCESS;
}
