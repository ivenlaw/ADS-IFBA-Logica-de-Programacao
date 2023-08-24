// Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado seu raio e sua altura
// VOLUME = 3.14159 * R2 * ALTURA.

#include <stdio.h>
#include <math.h>

main ()
{
	float raio = 4;
	float altura = 19;
	float volume;
	
	
	volume = 3.14159 * pow(raio, 2) * altura;
	printf("O volume de uma lata de oleo de raio %.2f e altura %.2f eh %.4f \n", raio, altura, volume=volume);
}
