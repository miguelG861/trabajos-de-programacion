#include<iostream>
using namespace std;

int main()
{
	//mensaje de bienvenida
	cout << "Hola! Este programa 1.9 calcula el cuadrado y el cubo de un numero entero positivo" << "\n";
	
	int n;
	cout<< "Ingresa un numero: ";
	cin>> n;
	cout<< "El numero elevado al cuadrado es: "<<n*n<<endl;
	
	cout<< "El numero elevado al cubo es: "<<n*n*n<<endl;
	return 0;
}
