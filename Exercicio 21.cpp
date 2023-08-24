// Escreva um programa que leia um número e exiba se ele é positivo ou negativo. 

#include <stdio.h>

main (){
	
	int numero;
	
	printf("Escreva um numero maior ou menor que zero: ");
	scanf("%d", &numero);
	
	if (numero>0)
			printf("O numero %d eh positivo.\n", numero);
	
		else if (numero<0)
			printf("O numero %d eh negativo.\n", numero);
		
		else if (numero==0)
			printf("Opcao invalida, o numero deve ser maior ou menor que zero.\n");
	
}
