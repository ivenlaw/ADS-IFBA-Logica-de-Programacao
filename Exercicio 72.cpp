/*  Escreva um programa que leia um vetor de 10 posi��es ordenados de inteiros e um inteiro.
 O programa deve informar a primeira posi��o onde este inteiro ocorre no vetor 
 ou -1 caso o valor n�o ocorra no vetor (Busca Bin�ria). */
 
// com erro ***** 
 
#include <stdio.h>
#include <locale.h>


main () {
	
	int num[10] = {2,15,26,34,48,59,68,78,86,92};
	int i=5, j=10, y, x;
	
	setlocale(LC_ALL, "Portuguese"); 
	
	printf("Qual n�mero a ser encontrado?\n");
	scanf("%d", &x);
	
	do {
		if(x==num[i]){
			printf("O n�mero digitado pertence a lista, na posi��o %d", i+1);
			y=1;
			break;
		}		
		else if (x>num[i]) {
			i=i+((j-(i))/2);
				if(x==num[i]){
					printf("O n�mero digitado pertence a lista, na posi��o %d", i+1);
					y=1;
					break;
				}
					if (x<num[i]){
						j=i;
						i=j/2;
					}
						if (x>num[i]) {
							i=i+((j-(i))/2);
						}
								if(x==num[i]){
									printf("O n�mero digitado pertence a lista, na posi��o %d", i+1);
									y=1;
									break;
								}
								else {
									printf("-1");
									y=1;
								}

					}
	
		else if (x<num[i]) {
			j=i;
			i=j/2;
			if(x==num[i]){
				printf("O n�mero digitado pertence a lista, na posi��o %d", i+1);
				y=1;
				break;
			}
				if (x>num[i]){
					i=i+((j-(i))/2);
					continue;
				}
					if (x<num[i]) {
						j=i;
						i=j/2;
					}
					else {
						printf("-1");
						y=1;
					}

		}
	} while (y!=1);
	
}
