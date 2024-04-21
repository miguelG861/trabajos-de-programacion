#include<stdio.h>
#include<conio.h>
#include <iostream>
using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.11 calcula el cambio que se le entrega a un cliente" << "\n";
	
	int _articulo;
	float cantidad_de_dinero,cambio;
	
	   printf("Ingrese el costo del articulo vendido: ");
	   cin>>_articulo;
	   cout<<"Ingrese la cantidad de dinero entregado por el cliente: ";
	   cin>>cantidad_de_dinero;
	   cambio=-(cantidad_de_dinero-_articulo);
	   cout<<"El cambio que se debe entregar al cliente es de: "<< cambio ;
	   
	printf("\nPresione una tecla para continuar...");
	getch();
	return 0;
	
}
