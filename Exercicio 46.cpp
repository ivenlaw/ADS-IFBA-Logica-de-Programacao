// Escreva um programa que calcule o quociente da divisão de A por B (número inteiros e positivos), 
// ou seja, A / B, através de subtrações sucessivas. Esses dois valores são passados pelo usuário através do teclado. 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int numA, numB, num;
	int contQ=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite dois números: \n");
	scanf("%d %d", &numA, &numB);
	
	num=numA;
	
	if (numA<0 || numB<0){
		printf("Favor não informar número negativo.\n");
		exit;
	}
	else if (numA<numB){
		printf("O número %d é menor que %d, não possuindo quociente inteiro\n", numA, numB);
		exit;
	}
	else if (numA==numB){
		printf("O quociente de %d por %d é 1", numA, numB);
		exit;
	}
	
	do 
	{	num = num-numB;
		contQ= contQ+1;
	}
	while(num>=numB);
	printf("O quociente de %d por %d é %d", numA, numB, contQ);
}

