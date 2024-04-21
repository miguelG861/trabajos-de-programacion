#include <stdio.h>

int main()
{
	const float Pi = 3.141592;
	float radio, altura, area, volumen;
	printf("\n\n\n         Radio del cilindro: ");
	scanf("%f", &radio);
	printf ("           Altura del cilindro: ");
	scanf("%f",  &altura);
	area = 2 * Pi * radio * altura;
	volumen = Pi * radio * radio * altura;
	printf ("\n\n         Area = %g\n            Volumen = %g\n\n\n", area, volumen);
	
	return 0;
	}
