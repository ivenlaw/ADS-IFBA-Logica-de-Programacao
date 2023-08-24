// Escreva um programa que leia um n�mero inteiro de 1 a 7 e informe o dia da semana correspondente, 
// sendo domingo o dia de n�mero 1. Se o n�mero n�o corresponder a um dia da semana, mostre uma mensagem de erro. 

#include <stdio.h>
#include <locale.h>

main (){
	
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um dia da semana entre 1 e 7: ");
	scanf("%d", &numero);
	
	switch(numero){
		case(1):
			printf("O dia da semana n�mero %d corresponde ao domingo.\n", numero);
			break;
		case(2):
			printf("O dia da semana n�mero %d corresponde a segunda-feira.\n", numero);
			break;
		case(3):
			printf("O dia da semana n�mero %d corresponde a ter�a-feira.\n", numero);
			break;
		case(4):
			printf("O dia da semana n�mero %d corresponde a quarta-feira.\n", numero);
			break;
		case(5):
			printf("O dia da semana n�mero %d corresponde a quinta-feira.\n", numero);
			break;
		case(6):
			printf("O dia da semana n�mero %d corresponde a sexta-feira.\n", numero);
			break;
		case(7):
			printf("O dia da semana n�mero %d corresponde a s�bado.\n", numero);
			break;
		default:
			printf("Voc� informou um n�mero inv�lido.\n");
			break;
	}
}

