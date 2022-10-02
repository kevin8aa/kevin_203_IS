// Esta función no toma parámetros
// No depende de la persona que llama para nada
#include <iostream>
using namespace std;
void doPrint ()
{
    std::cout << "En doPrint () \ n";
}

// Esta función toma un parametro entero llamado x
// La persona que llama proporcionará el valor de x
void printValue (int x)
{
    std::cout << x << '\ n';
}

// Esta función tiene dos parámetros enteros, uno llamado x y otro llamado y
// La persona que llama proporcionará el valor tanto de x como de y
int add (int x, int y)
{
    return 0;
}
