// Escreva um programa que leia um número e imprima se este número é ou não par. 

#include <stdio.h>

main (){
	
	int numero, par, impar;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (numero%2==0)
		printf("O numero %d eh par", numero);
	else
		printf("O numero %d eh impar", numero);
		
}

