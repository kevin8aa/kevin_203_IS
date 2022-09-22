#include <iostream>

    void doB()
    {
        std::cout << "en doB()\n";
    }
    
    void doA()
    {
        std::cout << "en doA()\n";
        doB();
    }

    //definicion de la funcion main ()
    int main()
{
    std::cout << "iniciando main()\n";
    doA();
    doB();
    std::cout << "finalizando main()\n";
    return 0;
}