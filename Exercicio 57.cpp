/* Sendo S = 1 + 1/2� + 1/3� + 1/N^N , um somat�rio de N (informado pelo usu�rio) 
termos, escreva um programa para calcular S para um n�mero N. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

main () {
	
	int num;
	float S=1.00;
	int i;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	for(i=2; i<=num;i++){
		S=S+(1.00/(pow(i,i)));
	}
	
	printf("O valor de S para o n�mero %d � %.6f.\n", num, S);
		
}
