/* Escreva um programa que carregue um array com tamanho vari�vel. O tamanho m�ximo do array � de 100 posi��es (carga de array com sentinela). */

#define tamanho 100
#include <stdio.h>
#include <locale.h>


main () {
	
	int num[tamanho], i, j, x;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Entre com o tamanho da array (<=100): \n");
	scanf("%d", &j);
	
	if(j<=tamanho){

		for(i=0; i<j && i<tamanho;i++){
			printf("Digite os valores da array (%d/%d numeros): \n", i+1, j);
			scanf("%d", &num[i]);
		}
	}
	else {
		printf("Valor maior que o permitido (%d). \n", tamanho);
		return 0;
	}
	
	printf("A s�rie de %d n�meros �: \n", j);
	
	for(int c=0; c<j; c++){
		printf(" %d \n", num[c]);
	}

}
