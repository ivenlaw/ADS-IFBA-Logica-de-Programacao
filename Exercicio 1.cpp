// Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.
// Podemos calcular o perímetro de um retângulo usando a fórmula p = 2 (a+b) e podemos calcular sua área usando a fórmula A = ab, onde b é a base do retângulo e a é sua altura

#include <stdio.h>

int main () 
{
	int base=8;
	int altura=2;
	int area, perimetro;
	area=base*altura;
	perimetro = 2*(base+altura);
	
	printf("Um retangulo de base %d, altura %d tem area de %d e perimetro de %d\n", base, altura, area, perimetro);
	
}
