// Escreva um programa que leia um n�mero e imprima se este n�mero � ou n�o par. 

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

