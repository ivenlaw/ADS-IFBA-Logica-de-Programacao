// Escreva um programa em C, que gere uma string composta pelo último nome, seguido de virgula e as iniciais dos demais nomes (em ordem), seguida de ponto. 
// Por exemplo, se a string entrada for "Gabriel Garcia Marquez", a string gerada deve ser "Marquez, G. G.". 

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	setlocale (LC_ALL, "Portuguese");
	
	char str1[100], str2[100], ultimoNome[20], inicial[10];
	int x=0, size=0, sizeUltimo=0, palavras=0, y=0, j, i;
	
	printf("\nEntre com o nome completo: ");
	gets(str1);

	// conta a quantidade de palavras
	for(i=0; str1[i]!='\0'; i++) {
		if(str1[i]==' ') 
			palavras=palavras+1;
	}	
	printf("%d", palavras);

	// iniciais
	inicial[0]=str1[0];
	inicial[1]='.';
	inicial[2]=' ';
	for(i=1, j=3;str1[i]!='\0'; i++) {
		if (x<palavras-1){
			if(str1[i]==' ') {
				i=i+1;
				inicial[j]=str1[i];
				j++;
				inicial[j]='.';
				j++;
				inicial[j]=' ';
				j++;
				x=x+1;
				printf("%d", x);
			}	
		}
	
	}
		
	// conta o tamanho da string
	for(int i=0; str1[i]!='\0'; i++) {
		if(str1[i]!='\0') {
			size=size+1;
		}
	}

	// ultimo nome
	for(j=size-1; str1[j]!=' '; j--) {
		str2[y]=str1[j];
		y++;
		sizeUltimo=sizeUltimo+1;
	}
	
	sizeUltimo--;
	
	for (i=0; sizeUltimo>=0; i++) {
		ultimoNome[i]=str2[sizeUltimo];
		sizeUltimo--;
	}

	// Resultado
	printf("%s, %s\n", ultimoNome, inicial);
		
	return 0;
}
