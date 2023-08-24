/* A série de Fibonacci é formada pela sequencia: o 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... 
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo (com N sendo uma entrada do algoritmo). */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num, soma;
	int numAtual=1;
	int numAnt=0;
	
	
	setlocale(LC_ALL, "Portuguese");


	printf("Digite um número: \n");
	scanf("%d", &num);

	do {
		printf("%d ", numAnt);
		soma=numAnt+numAtual;
		numAnt=numAtual;
		numAtual = soma;
	} while (numAnt<=num);
}


