#include <iostream>

void doSomething ()
{
    std :: cout << "¡Hola! \ n";
}

int main ()
{
    int x {0}; // la vida de x comienza aquí
    doSomething(); // x sigue vivo durante esta llamada a la función
    return 0;
} // La vida de x termina aquí