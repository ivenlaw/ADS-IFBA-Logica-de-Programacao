/* Escreva um programa que leia um vetor de 15 posições de inteiros. 
Em seguida, o programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre no vetor */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num[15]={15,25,36,48,2,9,56,14,36,18,25,25,2,9,14};
	int i;
	int cont=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<15;i++){
		if(num[1]==num[i])
			cont=cont+1;
		else
			continue;
	}
	printf("O número %d aparece %d na array.\n", num[1], cont);

}
