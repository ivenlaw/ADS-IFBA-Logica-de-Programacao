// Escreva um programa que leia uma letra e mostre se ela � vogal ou consoante. 

#include <stdio.h>
#include <locale.h>

main (){

	char letra, vogal;

	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
		
	if ((letra=='a') || (letra=='e') || (letra=='i') || (letra=='o') || (letra=='u'))
		printf("A letra \''%c\'' � uma vogal.\n", letra);
	else
		printf("A letra \''%c\'' � uma consoante.\n", letra);
	
}
