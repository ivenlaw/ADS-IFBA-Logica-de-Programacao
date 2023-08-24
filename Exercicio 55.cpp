/* Dizemos que dois números são amigos se cada um deles é igual a soma dos divisores próprios do outro. 
 Os divisores próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o próprio N. 
 Um exemplo de números amigos são 284 e 220, pois os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. 
 Efetuando a soma destes números obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284). 
 Os divisores próprios de 284 são 1, 2, 4, 71 e 142, efetuando a soma destes números obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). 
 Escreva um programa que dado dois inteiros, verifique se eles são amigos. (17296 e 18416 são amigos, por exemplo). */
 
 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num1, num2;
	int div1=0;
	int div2=0;
	int i, j;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite dois números: \n");
	scanf("%d %d", &num1, &num2);

	for(i=1; i<=num1/2; i++){
		if(num1%i==0){
			div1=div1+i;
		}else
			continue;
	}
	
	for(j=1; j<=num2/2; j++){
		if(num2%j==0){
			div2=div2+j;
		}else
			continue;
	}
 
	if(div1==num2 && div2==num1)
		printf("Os números %d e %d são números amigos. \n", num1, num2);
	else
		printf("Os números %d e %d não são números amigos. \n", num1, num2);
}

