// Escreva um programa que leia três números e mostre o maior entre eles. 

#include <stdio.h>

main (){
	
	int maior, numero1, numero2, numero3;
	
	printf("Digite 3 numeros: ");
	scanf("%d %d %d", &numero1, &numero2, &numero3);
	
	if (numero1>numero2 && numero1>numero3){
		maior = numero1;
	}
	else if (numero2>numero1 && numero2>numero3){
		maior = numero2;
	}
	else {
		maior = numero3;
	}
	
	printf("O maior numero entre %d, %d e %d eh %d\n", numero1, numero2, numero3, maior);
}

