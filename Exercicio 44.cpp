// Escreva um programa que imprima todos os n�meros de 1 at� 100, inclusive, e a soma de todos eles.

#include <stdio.h>
#include <stdlib.h>

main(){
	int i, soma;
	soma = 0;
	
	for (i=1; i<=100; i++){
		printf("%d, ", i);
		soma = soma+i;
	}
	printf("Soma de todos = %d. ", soma);
}
