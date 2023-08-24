// Escreva um programa que leia um número e exiba o seu módulo. 

#include <stdio.h>
#include <math.h>

main () {
	
	int numero, modulo;
	
	printf("Informe um numero maior ou menor que zero: ");
	scanf("%d", &numero);
	
	modulo = fabs(numero);
	
	printf("O modulo do numero %d eh o numero %d.\n", numero, modulo);
	
}
