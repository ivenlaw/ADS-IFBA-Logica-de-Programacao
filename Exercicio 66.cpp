/* Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em um segundo vetor e imprima este último */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num1[10]={0,1,2,3,4,5,6,7,8,9};
	int num2[10];
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0; i<10;i++) {
		num2[i]=num1[i];
		printf("%d\n", num2[i]);
	}
}

