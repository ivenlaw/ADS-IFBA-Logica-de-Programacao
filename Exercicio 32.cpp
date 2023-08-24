// Escreva um programa que leia um caracter e diga se ele é uma vogal, consoante, número ou um símbolo (qualquer outro caracter, que não uma letra ou número). 

#include <stdio.h>
#include <locale.h>

main () {
	
	char digito;
	int a,b, c;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("Digite um caracter qualquer: ");
	scanf ("%c", &digito);
	
		
	if (digito == 'a' || digito=='e'|| digito=='i' || digito=='o' ||digito=='u' ||digito=='y') {
		printf("O caracter digitado é uma vogal.\n");
	}
	else if (digito>'a' && (digito != 'a' || digito!='e'|| digito!='i' || digito!='o' ||digito!='u'))
	
		printf("O caracter digitado é uma consoante. \n");

	else if  (digito>=48 && digito<=57)       // tabela ascII
		printf("O caracter digitado é um número.\n");
		
	else
		printf("O caracter digitado é um símbolo.\n");
	
}
