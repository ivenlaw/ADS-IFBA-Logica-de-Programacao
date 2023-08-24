// Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894).

#include <stdio.h>

main ()
{
	int numero, n2, n3;
	int n1;
	
	printf ("Digite um numero inteiro de 3 digitos: ");
	scanf("%d", &numero); 
	
	n1 = (numero%10);
	n2 = ((numero-n1)%100)/10;
	n3 = (numero-n2-n1)/100;
	
	printf ("O inverso de %d eh %d%d%d", numero, n1, n2, n3);
}
