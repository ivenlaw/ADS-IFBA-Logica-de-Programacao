/* Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0 para cada elemento. 
Imprima o vetor em seguida, indicando a posição e o valor na posição (um por linha). */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num [20]={0};
	int i;
		
	setlocale(LC_ALL, "Portuguese");

	for (i=0; i<=19; i++){
		printf("Posição %d, valor %d. \n", i, num[i]);
	}
	
}
