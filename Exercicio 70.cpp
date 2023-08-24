/* Escreva um programa que carregue um array com tamanho variável. O tamanho máximo do array é de 100 posições (carga de array com sentinela). */

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
	
	printf("A série de %d números é: \n", j);
	
	for(int c=0; c<j; c++){
		printf(" %d \n", num[c]);
	}

}
