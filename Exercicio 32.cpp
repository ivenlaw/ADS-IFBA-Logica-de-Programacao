// Escreva um programa que leia um caracter e diga se ele � uma vogal, consoante, n�mero ou um s�mbolo (qualquer outro caracter, que n�o uma letra ou n�mero). 

#include <stdio.h>
#include <locale.h>

main () {
	
	char digito;
	int a,b, c;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("Digite um caracter qualquer: ");
	scanf ("%c", &digito);
	
		
	if (digito == 'a' || digito=='e'|| digito=='i' || digito=='o' ||digito=='u' ||digito=='y') {
		printf("O caracter digitado � uma vogal.\n");
	}
	else if (digito>'a' && (digito != 'a' || digito!='e'|| digito!='i' || digito!='o' ||digito!='u'))
	
		printf("O caracter digitado � uma consoante. \n");

	else if  (digito>=48 && digito<=57)       // tabela ascII
		printf("O caracter digitado � um n�mero.\n");
		
	else
		printf("O caracter digitado � um s�mbolo.\n");
	
}
