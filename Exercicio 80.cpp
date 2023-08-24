// Escreva um programa em C que leia duas string e informe se a primeira contém a segunda.

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char str1[100], str2[100];
	int x=0, size2=0, j=0, i=0;
	
	printf("\nEntre com sua primeira string: ");
	gets(str1);

	printf("\nEntre com sua segunda string: ");
	gets(str2);
	
	for(int i=0; str2[i]!='\0'; i++) {
		if(str2[i]!='\0') {
			size2=size2+1;
		}
	}
	
	for(int i=0; (str1[i]!='\0')||(x>size2); i++) {
		for (j=0; str2[j]!='\0'; j++){
			if(str2[j]==str1[i]) {
				x=x+1;
				if (x==size2) {
					printf("\nA primeira string contém a segunda.");
					break;
				}
			}	
		}
	}
	if (x!=size2)
		printf("\nA primeira string não contém a segunda.");
		
	return 0;
}
