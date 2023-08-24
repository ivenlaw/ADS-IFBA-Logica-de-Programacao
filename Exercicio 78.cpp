// Escreva um programa em C, que leia uma string e um caracter e conte o número de ocorrências do caracter lido na string. 


#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char str1[20], str2;
	int x=0, size=0;
	
	printf("\nEntre com sua string: ");
	gets(str1);
	
	printf("\nEntre com um caracter: ");
	scanf("%c", &str2);
	
	for(int i=0; str1[i]!='\0'; i++){
		if (str2==str1[i]) {
			size=size+1;
		}
	}
	printf("\nO caracter %c aparece %d vezes na string.", str2, size);
}
