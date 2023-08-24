/* Dizemos que dois n�meros s�o amigos se cada um deles � igual a soma dos divisores pr�prios do outro. 
 Os divisores pr�prios de um n�mero positivo N s�o todos os divisores inteiros positivos de N exceto o pr�prio N. 
 Um exemplo de n�meros amigos s�o 284 e 220, pois os divisores pr�prios de 220 s�o 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110. 
 Efetuando a soma destes n�meros obtemos o resultado 284 (1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284). 
 Os divisores pr�prios de 284 s�o 1, 2, 4, 71 e 142, efetuando a soma destes n�meros obtemos o resultado 220 (1 + 2 + 4 + 71 + 142 = 220). 
 Escreva um programa que dado dois inteiros, verifique se eles s�o amigos. (17296 e 18416 s�o amigos, por exemplo). */
 
 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num1, num2;
	int div1=0;
	int div2=0;
	int i, j;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite dois n�meros: \n");
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
		printf("Os n�meros %d e %d s�o n�meros amigos. \n", num1, num2);
	else
		printf("Os n�meros %d e %d n�o s�o n�meros amigos. \n", num1, num2);
}

