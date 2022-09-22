#include <iostream> // para std :: cout

void doB()
{
        std :: cout << "en doB () \ n";
}

void doA()
{
        std::cout << "iniciando doA () \ n";
        doB();
        std::cout << "finalizando doA () \ n";
}

//definicion de la funcion main()
int main()
{
    std::cout << "iniciando main () \ n";
    doA();
    std::cout << "finalizando main () \ n";
    return 0;
}