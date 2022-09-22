#include <iostream> // para std :: cout

void doPrint () 
{       
        std :: cout << "En doPrint () \ n";
}

//Definicion de la funcion main ()
int main()
{
    std :: cout << "iniciando main () \ n";
    doPrint (); // doPrint () llamado por primera vez
    doPrint (); // doPrint () llamado por segunda vez
    std :: cout << "finalizando main () \ n"; 

    return 0;
}