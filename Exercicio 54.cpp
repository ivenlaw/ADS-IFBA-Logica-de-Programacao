/* Construa um programa que receba um n�mero e verifique se ele � um n�mero triangular. 
(Um n�mero � triangular quando � resultado do produto de tr�s n�meros consecutivos. Exemplo: 24 = 2 x 3 x 4) */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num;
	int multiMais=0;
	int i;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um n�mero: \n");
	scanf("%d", &num);

	for(i=0;i<num;i++){
		multiMais=(i+1)*(i+2)*(i+3);
		if(num==multiMais){
			printf("O n�mero %d � triangular, pois � o produto de %d, %d e %d. \n", num, i+1, i+2, i+3);
			break;
		}
		else
			continue;		
	} 
	if (num!=multiMais)
		printf("O n�mero %d n�o � triangular.\n", num);
}

