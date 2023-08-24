// Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o numero por extenso.


#include <stdio.h>
#include <locale.h>

main () {
	
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número de 0 a 100: ");
	scanf("%d", &numero);
	
	switch(numero){
	
		case(0):
			printf("O número digitado é o zero.\n");
			break;
		case(1): 
			printf("O número digitado é o um.\n");
			break;
		case(2): 
			printf("O número digitado é o dois.\n");
			break;
		case(3): 
			printf("O número digitado é o três.\n");
			break;
		case(4): 
			printf("O número digitado é o quatro.\n");
			break;
		case(5): 
			printf("O número digitado é o cinco.\n");
			break;
		case(6): 
			printf("O número digitado é o seis.\n");
			break;
		case(7): 
			printf("O número digitado é o sete.\n");
			break;
		
	}
}
