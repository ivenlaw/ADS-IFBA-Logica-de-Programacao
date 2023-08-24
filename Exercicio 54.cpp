/* Construa um programa que receba um número e verifique se ele é um número triangular. 
(Um número é triangular quando é resultado do produto de três números consecutivos. Exemplo: 24 = 2 x 3 x 4) */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num;
	int multiMais=0;
	int i;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número: \n");
	scanf("%d", &num);

	for(i=0;i<num;i++){
		multiMais=(i+1)*(i+2)*(i+3);
		if(num==multiMais){
			printf("O número %d é triangular, pois é o produto de %d, %d e %d. \n", num, i+1, i+2, i+3);
			break;
		}
		else
			continue;		
	} 
	if (num!=multiMais)
		printf("O número %d não é triangular.\n", num);
}

