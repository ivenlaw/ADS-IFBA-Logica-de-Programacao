/* Escreva um programa que leia um valor e imprima todas as possíveis combinações em que o lançamento de um par de dados 
tenha como resultado da soma dos valores dos dados o número lido. 

Por exemplo, se a entrada for o número 7, o programa deve imprimir as seguintes combinações: 
* 1 6 
* 2 5 
* 3 4 
* 4 3 
* 5 2 
* 6 1  */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num, i;
	int cont=0;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número: \n");
	scanf("%d", &num);
	
	for(i=1; i<num ;i++){
		cont=num-i;
		printf("%d %d \n", i, cont);
	}

}
