
/* Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e informe o dia que mais choveu, 
o dia que menos choveu e as médias pluviométricas de cada uma das duas quinzenas.*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	float num[30]={0,0,0,0,0,5.2,0.6,0.4,0,0,0,0,2.3,4.5,0.1,0,0,0,0.4,0.6,0.8,0,0,0,0,0.8,0.9,2.6,1,0.9};
	int i, j;
	float numMaior=0;
	float numMenor=100;
	int diaMaior=0;
	int diaMenor=0;
	float media1, media2;
	float soma1=0.0;
	float soma2=0.0;
	int cont1=0;
	int cont2=0;
	
	setlocale(LC_ALL, "Portuguese");

	for(i=0;i<=14;i++){
		if (num[i]>0){
			soma1=soma1+num[i];
			cont1=cont1+1;
		}
	media1 = soma1/cont1;
	}
	
		for(i=15;i<=29;i++){
		if (num[i]>0){
			soma2=soma2+num[i];
			cont2=cont2+1;
		}
	media2 = soma2/cont2;
	}
	

	for(i=0;i<=19;i++){
		for(j=1;j<=19; j++) {
			if(num[i]>num[j] && num[i]>=numMaior){
				numMaior=num[i];
				diaMaior=i+1;
			}
			continue;
		}
	}
	
	for(i=0;i<=19;i++){
		for(j=1;j<=19; j++) {
			if (num[i]>0 && num[j]>0){
				if(num[i]<num[j] && num[i]<=numMenor){
					numMenor=num[i];
					diaMenor=i+1;
				}
			}
			continue;
		}
	}

	printf("O maior índice pluviométrico aconteceu dia %d, com %.2f mm.\n", diaMaior, numMaior);
	printf("O menor índice pluviométrico aconteceu dia %d, com %.2f mm.\n", diaMenor, numMenor);
	printf("As médias pluviométricas: %.2f na 1ª quinzena e %.2f na 2ª.\n", media1, media2);
}





