// Escreva um programa que determine se um dado n�mero N (digitado pelo usu�rio) � primo ou n�o. 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int contPrimo=1;
	int primo, n, i;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: \n");
	scanf("%d", &n);
	
	for(i=1; i<n; i++) {
		primo=(n%i);
		if(primo==0){
			contPrimo=contPrimo+1;
		}
	}
	
	if(contPrimo==2){
		printf("O n�mero %d � primo. \n", n);
	}
	else
		printf("O n�mero %d n�o � primo. \n", n);
	
}
