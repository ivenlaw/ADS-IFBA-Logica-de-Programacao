// Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante. 

#include <stdio.h>
#include <locale.h>

main (){

	char letra, vogal;

	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
		
	if ((letra=='a') || (letra=='e') || (letra=='i') || (letra=='o') || (letra=='u'))
		printf("A letra \''%c\'' é uma vogal.\n", letra);
	else
		printf("A letra \''%c\'' é uma consoante.\n", letra);
	
}
