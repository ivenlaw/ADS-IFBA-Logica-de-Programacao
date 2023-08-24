/* Faça um programa em C que leia um array de 10 posições e conte quantos números pares são elementos do array. Imprima esta quantidade*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num[10];
	int i;
	int cont=0;
	int posi=0;
	
	setlocale(LC_ALL, "Portuguese");

	do{
	printf("Digite %d/10 números: \n", posi+1);
	scanf("%d", &num[posi]);
	posi++;
	}while(posi<10);
		
	for(i=0; i<=9; i++){
		if (num[i]%2==0){
			cont=cont+1;
		}
		else
			continue;
	}
	printf("Esse array possui %d números pares.\n", cont);

}
