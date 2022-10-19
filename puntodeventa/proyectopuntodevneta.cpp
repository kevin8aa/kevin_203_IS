#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct tienda{
	char vendedor[20];
	int productos;
//	int venta=0;
}tienda[6];

void registro();
void rg(int x);
void comprar();
void cn(int x);
void mostrar();

int v=0;

int main(){
	char c;
	do{
		cout<<endl<<"======== REGISTRO DE VENTAS ========="<<endl<<endl;
		cout<<"a) Registro de STOCK"<<endl;
		cout<<"b) Realizar compra"<<endl;
		cout<<"c) Mostrar registro de ventas"<<endl;
		cout<<"d) Salir"<<endl;
		cout<<" Eliga una opción"<<endl;
		cin>>c;
		
		switch(c){
			case 'a':
				registro();
				break;
			case 'b':
				comprar();
				break;
			case 'c':
				mostrar();
				break;
				
			
		}
		system ("cls");
		
	}while (c != 'd');
}
void registro(){
	char p;
	int b;
	system("cls");
	do{
		cout<< "========== REGISTRAR STOCK =========="<<endl<<endl;
		cout<< "1) Tienda 1"<<endl;
		cout<< " "<<endl;
		cout<<"Presione ENTER para salir"<<endl;
		switch(getch()){
			case '1':
				b=1;
				rg(b);
				break;
		//	case 'INTRO':
				p='s';
				break;
		
		}
		system("cls");
		
		
	}while (p !='s');
}
void rg (int x){
	system("cls");
	cout<<" tienda?"<<x<<endl<<endl;
	cout<< "nombre del vendedor"<<endl;
	cin>>tienda[x-1].vendedor;
	cout<< "Cantidad de productos"<<endl;
	cin>>tienda[x-1].productos;
	
}
	

