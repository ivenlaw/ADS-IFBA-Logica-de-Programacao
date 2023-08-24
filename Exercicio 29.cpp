// Escreva um programa que calcula o desconto previdenciário de um funcionário. 
// Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo. 
// O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 334,29, o que seja menor. 

#include <stdio.h>
#include <locale.h>

main (){
	
	float salario, inss, salarioFinal;
	float inssMax = 334.29;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Digite o valor do salário bruto: ");
	scanf ("%f", &salario);
	
	inss = (salario*11/100);
	
	if (inss>inssMax){
		salarioFinal = salario - inssMax;
		printf("O salário líquido é de R$ %.2f, o desconto do INSS foi de %.2f (o desconto máximo).\n", salarioFinal, inssMax);
	}
	else {
		salarioFinal = salario - inss;
		printf("O salário líquido é de R$ %.2f, o desconto do INSS foi de %.2f.\n", salarioFinal, inss);
	}
		
}
