#include <iostream>

// add () toma dos enteros como parámetros y devuelve el resultado de su suma
// Los valores de x e y están determinados por la función que llama a add ()
int add (int x, int y)
{
    return x + y;
}
 
// main no toma parámetros 
int main ()
{
    std::cout<< add (4, 5) << '\ n'; // Los argumentos 4 y 5 se pasan a la función add ()
    return 0;
}