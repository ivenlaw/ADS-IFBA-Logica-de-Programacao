// Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores. 

#include <stdio.h>
#include <locale.h>

main (){
	
	int num1, num2, num3, maior, menor, medio, soma;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite 3 números: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if ((num1>num2) && (num1>num3)){
		maior = num1;
	}
	else if ((num2>num3) && (num2>num1)){
		maior = num2;
	}
	else if ((num3>num1) && (num3>num2)){
		maior =num3;
	}
		if ((num1<num2) && (num1<num3)){
		menor = num1;
	}
	else if ((num2<num3) && (num2<num1)){
		menor = num2;
	}
	else if ((num3<num1) && (num3<num2)){
		menor =num3;
	}
	
	if ((menor!=num1) && (num1!= maior))
		medio = num1;
	else if ((menor!=num2) && (num2!= maior))
		medio = num2;
	else if ((menor!=num3) && (num3!= maior))
		medio = num3;
		
	soma = maior + medio;
	printf("A soma dos 2 maiores números informados é %d.\n", soma);
}
