//Escreva um programa em C, que leia uma string e conte quantas ocorrências de vogais existem nesta string. 

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char vogal[20];
	int x=0;
	
	printf("\nEntre com sua string: ");
	gets(vogal);
	
	for(int i=0;vogal[i]!='\0';i++){
		if((vogal[i]=='a')||(vogal[i]=='e')||(vogal[i]=='i')||(vogal[i]=='o')||(vogal[i]=='u')) 
			x=x+1;
	}
	
	printf("\nA string possui %d vogais.", x);
}
