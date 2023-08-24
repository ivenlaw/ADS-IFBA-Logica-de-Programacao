/* Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior valor dentre os elementos do array, bem como suas respectivas posições.*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num[20]={12,25,65,48,7,95,32,12,220,56,58,21,03,25,14,159,68,78,54,2000};
	int i,j;
	int numMaior=0;
	int posMaior=0;
	int numMenor=num[0];
	int posMenor=0;
	
	setlocale(LC_ALL, "Portuguese");

	for(i=0;i<=19;i++){
		for(j=1;j<=19; j++) {
			if(num[i]>num[j] && num[i]>=numMaior){
				numMaior=num[i];
				posMaior=i;
			}
			continue;
		}
	}
	
	for(i=0;i<=19;i++){
		for(j=1;j<=19; j++) {
			if(num[i]<num[j] && num[i]<=numMenor){
				numMenor=num[i];
				posMenor=i;
			}
			continue;
		}
	}

	
	printf("O maior número da array é %d na posição %d.\n", numMaior, posMaior);
	printf("O menor número da array é %d na posição %d.\n", numMenor, posMenor);
}


