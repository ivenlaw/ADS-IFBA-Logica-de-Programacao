/* Sendo S = 1 + 1/2² + 1/3³ + 1/N^N , um somatório de N (informado pelo usuário) 
termos, escreva um programa para calcular S para um número N. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

main () {
	
	int num;
	float S=1.00;
	int i;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número: \n");
	scanf("%d", &num);
	
	for(i=2; i<=num;i++){
		S=S+(1.00/(pow(i,i)));
	}
	
	printf("O valor de S para o número %d é %.6f.\n", num, S);
		
}
