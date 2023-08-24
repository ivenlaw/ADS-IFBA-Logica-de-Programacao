// Escreva um programa em C que normalize uma string lida, em uma nova string. 
// Normalizar uma string é o processo de remover os espaços excedentes que separam as palavras. 


#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char str1[100], str2[100];
	int x=0, size2=0, j=1, i=0;
	
	printf("\nEntre com sua string: ");
	gets(str1);


	do {
		if((str1[i]!=' ' )&& (str1[j]!=' ')) {
			str2[i]=str1[j];
			i++;
			j++;
		}
		else {
			str2[i]=str1[i];
			i++;
			j++;
		}
		
	} while (str1[i]!='\0');
	
	puts(str2);
}

