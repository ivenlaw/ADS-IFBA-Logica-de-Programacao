/* Escreva um programa que leia dois vetores de n�meros reais de mesma dimens�o (10 posi��es), e imprima o vetor resultante da soma destes vetores. */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num1[10];
	int num2[10];
	int i;
	int cont=0;
	int posi=0;
	
	setlocale(LC_ALL, "Portuguese");

	do{
	printf("Digite %d/10 n�meros para o primeiro conjunto: \n", posi+1);
	scanf("%d", &num1[posi]);
	posi++;
	}while(posi<10);
	
	do{
	printf("Digite %d/10 n�meros para o segundo conjunto: \n", cont+1);
	scanf("%d", &num2[cont]);
	cont++;
	}while(cont<10);
		
	for(i=0; i<=9; i++)	{
		printf("A soma dos dois conjuntos de dados �:\n");
		printf("%d + %d = %d\n", num1[i], num2[i], num1[i]+num2[i]);
	}
	
}
