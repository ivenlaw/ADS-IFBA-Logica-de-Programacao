 /* . Escreva um programa que leia um vetor de 10 posi��es de inteiros e um inteiro. 
 O programa deve informar a primeira posi��o onde este inteiro ocorre no vetor ou -1 caso o valor n�o ocorra no vetor (Busca Sequencial). */
 
#include <stdio.h>
#include <locale.h>


main () {
	
	int num[10] = {5,4,98,26,23,47,1,11,47,18};
	int i, j;
	int x=0;
	
	setlocale(LC_ALL, "Portuguese"); 
	
	printf("Qual n�mero a ser encontrado?\n");
	scanf("%d", &j);
	
	for(i=0; i<10; i++){
		if(j == num[i]){
			printf("O n�mero %d est� na posi��o %d.\n", j, i);
			x=1;
			break;
		}
		else {
			continue;
		}
	}
	if (x!=1)
		printf("N�mero n�o encontrado.\n");
}
