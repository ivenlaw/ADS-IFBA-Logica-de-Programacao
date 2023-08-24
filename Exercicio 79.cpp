// Escreva um programa em C, que gere a substring de uma string original, dado a posição inicial e a final da substring. 


#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char str1[100], str2[100];
	int x=0, size=0, pos1, pos2;
	
	printf("\nEntre com sua string: ");
	gets(str1);
	
	for(int i=0; str1[i]!='\0'; i++) {
		if(str1[i]!='\0') {
			size=size+1;
		}
	}
	
	printf("\nSua string possui %d posições (de 0 a %d). Entre com a primeira posição de sua nova string: ", size, size-1);
	scanf("%d", &pos1);

	printf("\nEntre com  a última posição de sua nova string: ");
	scanf("%d", &pos2);

	for (int j=pos1; j<pos2; j++) {
		str2[x]=str1[j];
		x++;
	}
	
	puts(str2);

}
