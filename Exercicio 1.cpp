// Dado o tamanho da base e da altura de um ret�ngulo, calcular a sua �rea e o seu per�metro.
// Podemos calcular o per�metro de um ret�ngulo usando a f�rmula p = 2 (a+b) e podemos calcular sua �rea usando a f�rmula A = ab, onde b � a base do ret�ngulo e a � sua altura

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
