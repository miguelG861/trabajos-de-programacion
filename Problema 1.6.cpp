#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.15 calcula al cuantos segundo han pasado en un dia" << "\n";
	
	int horas, minutos, segundos, total, dias;
	
	printf( "\n Introduzca los dias: ");
	scanf( "%d", &dias );
	
	
	total = dias * 24 * 60 * 60;
	
	printf("\nE1 equivalente en segundos es: %i", total );
	
	getch(); /* Pausa */
	
	return 0;
}
