/* Fa�a um programa em C que crie e inicialize um array de 20 posi��es de inteiros com 0 para cada elemento. 
Imprima o vetor em seguida, indicando a posi��o e o valor na posi��o (um por linha). */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num [20]={0};
	int i;
		
	setlocale(LC_ALL, "Portuguese");

	for (i=0; i<=19; i++){
		printf("Posi��o %d, valor %d. \n", i, num[i]);
	}
	
}
