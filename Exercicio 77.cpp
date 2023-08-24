// Escreva um programa em C, que leia uma string, gere uma nova string com o texto invertido e imprima esta nova string. 


#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char str1[20], str2[20];
	int x=0, size=0;
	
	printf("\nEntre com sua string: ");
	gets(str1);
	
	for(int i=0; str1[i]!='\0'; i++) {
		if(str1[i]!='\0') 
			size=size+1;
	}
		
	for (int j=size-1; j>=0; j--){
		str2[x]=str1[j];
		x++;
	}
	puts(str2);
}
