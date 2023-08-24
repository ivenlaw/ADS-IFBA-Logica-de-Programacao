// Uma Cia de pulverização utiliza avião para pulverizar lavouras. 
// Os custos de pulverização dependem do tipo de praga e da área a ser contratada conforme a tabela: 
// Tipo 1 - ervas daninhas R$ 50,00 por acre; 
// Tipo 2 - gafanhotos R$ 100,00 por acre; 
// Tipo 3 - broca R$ 150,00 por acre; 
// Tipo 4 - todos acima R$ 250,00 por acre. 
// Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 5%. 
// Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um desconto de 10% sobre o valor que ultrapassar os R$ 750,00. 
// Caso ambos os descontos se aplicam o da área é calculado antes. 
// Fazer um algoritmo que leia: o tipo de pulverização (1 a 4) e área a ser pulverizada; e imprima o valor a ser pago. 

#include <stdio.h>
#include <locale.h>

main (){
	
	int praga;
	float area, custos, descArea, descCustos;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a praga a ser dizimada: \n");
	printf("Tipo 1 - ervas daninhas.\n");
	printf("Tipo 2 - gafanhotos.\n");
	printf("Tipo 3 - broca.\n");
	printf("Tipo 4 - todos acima.\n");
	scanf("%d", &praga);
	printf("Informe a área de pulverização: ");
	scanf("%f", &area);
	
	switch (praga){
		case(1):
			if (area>1000){
				descArea = (area*50)*0.05;
				custos = (area*50)-descArea;
			}
			else
				custos = area*50;
			break;
		case(2):
			if (area>1000){
				descArea = (area*100)*0.05;
				custos = (area*100)-descArea;
			}
			else
				custos = area*100;
			break;
		case(3):
			if (area>1000){
				descArea = (area*150)*0.05;
				custos = (area*150)-descArea;
			}
			else
				custos = area*150;	
			break;	
		case(4):
			if (area>1000){
				descArea = (area*250)*0.05;
				custos = (area*250)-descArea;
			}
			else
				custos = area*250;
			break;
		default:
			printf("Informado número da praga diferente de 1/2/3/4.\n");
			break;
	}	
	if (custos>750){
		descCustos = (custos-750)*0.1;
		custos = custos-descCustos;
		printf("O custo da pulverização será de %.2f.\n", custos);
	}
	else
		printf("O custo da pulverização será de %.2f.\n", custos);
	
}
