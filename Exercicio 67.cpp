/* Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior 
 valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro vetor. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num1[10]={15,25,36,48,2,9,56,14,36,18};
	int num2[10]={17,28,45,65,9,86,32,25,34,63};
	int num3[10];
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0; i<10;i++) {
		if(num1[i]>num2[i]){
			num3[i]=num1[i];
			printf("%d e %d > %d\n", num1[i], num2[i], num3[i]);
			continue;
		}
		else if (num2[i]>num1[i]){
			num3[i]=num2[i];
			printf("%d e %d > %d\n", num1[i], num2[i], num3[i]);
			continue;
		}
				
	}
}


