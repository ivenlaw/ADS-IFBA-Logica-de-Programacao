// Escreva um programa que imprima todos os números inteiros do intervalo fechado de 1 a 100. 

#include <stdio.h>
#include <locale.h>

main(){
	
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=1; i<=100; i++){
		printf("%d, ", i);
	}
}
