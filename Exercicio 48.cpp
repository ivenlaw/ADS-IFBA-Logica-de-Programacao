// Escreva um programa que determine se um dado número N (digitado pelo usuário) é primo ou não. 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int contPrimo=1;
	int primo, n, i;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	for(i=1; i<n; i++) {
		primo=(n%i);
		if(primo==0){
			contPrimo=contPrimo+1;
		}
	}
	
	if(contPrimo==2){
		printf("O número %d é primo. \n", n);
	}
	else
		printf("O número %d não é primo. \n", n);
	
}
