#include "iostream"
#include "string"
#include "math.h"

using namespace std;

int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa  1.7 escribe los 3 lados de un triangulo para determinar su area" << "\n";
	
	float A, B, C, s, area, a;
	double numero=593.262;
	double potencia=0.5;
	
	cout<<"Introduzca el valor de l1: ";
	cin>>A;
	cout<<"Introduzca el valor de l2: ";
	cin>>B;
	cout<<"Introduzca el valor de l3: ";
	cin>>C;
	
	s = (A + B + C)/2;
	
	a = (s*(s-A)*(s-B)*(s-C));
	area = pow(a, 0.5);
	
	cout << "El resultado de s es: " <<s<<endl;
	cout << "El resultado de la area es: " <<area<<endl;
	
	return 0;
}
