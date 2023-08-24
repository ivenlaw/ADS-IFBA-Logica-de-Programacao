/* Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior valor dentre os elementos do array.*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num[20];
	int i, maior, menor;
	int posi=0;
	
	setlocale(LC_ALL, "Portuguese");

	do{
	printf("Digite %d/20 números: \n", posi+1);
	scanf("%d", &num[posi]);
	posi++;
	}while(posi<20);
	
	for(i=1; i<=19; i++)	{
		if(num[0]<num[i]){
			maior=num[0];
			num[0]=num[i];
			num[i]=maior;
		}
		else 
			continue;
		}

	for(i=0; i<=19; i++)	{
		if(num[19]>num[i]){
			menor=num[19];
			num[19]=num[i];
			num[i]=menor;
		}
		else 
			continue;
		}
	printf("O maior número a array é: %d\n", num[0]);
	printf("O menor número a array é: %d\n", num[19]);
}
