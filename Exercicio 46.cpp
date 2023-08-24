// Escreva um programa que calcule o quociente da divis�o de A por B (n�mero inteiros e positivos), 
// ou seja, A / B, atrav�s de subtra��es sucessivas. Esses dois valores s�o passados pelo usu�rio atrav�s do teclado. 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int numA, numB, num;
	int contQ=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite dois n�meros: \n");
	scanf("%d %d", &numA, &numB);
	
	num=numA;
	
	if (numA<0 || numB<0){
		printf("Favor n�o informar n�mero negativo.\n");
		exit;
	}
	else if (numA<numB){
		printf("O n�mero %d � menor que %d, n�o possuindo quociente inteiro\n", numA, numB);
		exit;
	}
	else if (numA==numB){
		printf("O quociente de %d por %d � 1", numA, numB);
		exit;
	}
	
	do 
	{	num = num-numB;
		contQ= contQ+1;
	}
	while(num>=numB);
	printf("O quociente de %d por %d � %d", numA, numB, contQ);
}

