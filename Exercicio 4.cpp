// Dado os tr�s lados de um tri�ngulo determinar o per�metro do mesmo
// somar as medidas dos seus tr�s lados.

#include <stdio.h>

main ()
{
	int lado1=2;
	int lado2=4;
	int lado3=5;
	int perimetro = lado1+lado2+lado3;
	
	printf("Um triangulo de lados %d, %d e %d, possui perimetro de %d\n", lado1, lado2, lado3, perimetro);
}
