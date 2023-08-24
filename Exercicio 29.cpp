// Escreva um programa que calcula o desconto previdenci�rio de um funcion�rio. 
// Dado um sal�rio, o programa deve retornar o valor do desconto proporcional ao mesmo. 
// O c�lculo segue a regra: o desconto � de 11% do valor do sal�rio, entretanto, o valor m�ximo de desconto � 334,29, o que seja menor. 

#include <stdio.h>
#include <locale.h>

main (){
	
	float salario, inss, salarioFinal;
	float inssMax = 334.29;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Digite o valor do sal�rio bruto: ");
	scanf ("%f", &salario);
	
	inss = (salario*11/100);
	
	if (inss>inssMax){
		salarioFinal = salario - inssMax;
		printf("O sal�rio l�quido � de R$ %.2f, o desconto do INSS foi de %.2f (o desconto m�ximo).\n", salarioFinal, inssMax);
	}
	else {
		salarioFinal = salario - inss;
		printf("O sal�rio l�quido � de R$ %.2f, o desconto do INSS foi de %.2f.\n", salarioFinal, inss);
	}
		
}
