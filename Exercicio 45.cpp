// Escreva um programa que leia 5 n�meros, e imprima a m�dia entre eles. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	int num, soma, cont;
	float media;
	cont = 1;
	soma=0;
	
	setlocale (LC_ALL, "Portuguese");
	
	do {
		printf("Preciso de 5 n�meros, digite o n�mero %d/5: ", cont);
		scanf("%d", &num);
		soma = soma+num;
		cont++;
	} while(cont<=5);
	media=soma/5.00;
	printf("\nA m�dia dos n�meros digitados � %.2f. \n", media);	
	
}
