// Escreva um programa que leia um número inteiro de 1 a 7 e informe o dia da semana correspondente, 
// sendo domingo o dia de número 1. Se o número não corresponder a um dia da semana, mostre uma mensagem de erro. 

#include <stdio.h>
#include <locale.h>

main (){
	
	int numero;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um dia da semana entre 1 e 7: ");
	scanf("%d", &numero);
	
	switch(numero){
		case(1):
			printf("O dia da semana número %d corresponde ao domingo.\n", numero);
			break;
		case(2):
			printf("O dia da semana número %d corresponde a segunda-feira.\n", numero);
			break;
		case(3):
			printf("O dia da semana número %d corresponde a terça-feira.\n", numero);
			break;
		case(4):
			printf("O dia da semana número %d corresponde a quarta-feira.\n", numero);
			break;
		case(5):
			printf("O dia da semana número %d corresponde a quinta-feira.\n", numero);
			break;
		case(6):
			printf("O dia da semana número %d corresponde a sexta-feira.\n", numero);
			break;
		case(7):
			printf("O dia da semana número %d corresponde a sábado.\n", numero);
			break;
		default:
			printf("Você informou um número inválido.\n");
			break;
	}
}

