// Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de dias deste mês. 

#include <stdio.h>
#include <locale.h>

main (){
	
	int mes, mesDias;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o mês (1 a 12) desejado: ");
	scanf("%d", &mes);
	
	if ((mes==1)|| (mes==3) || (mes==5)|| (mes==7)|| (mes==8)||(mes==10)|| (mes==12)){
		mesDias = 'a';
	}
	else if ((mes==4)|| (mes==6)|| (mes==9)|| (mes==11)){
		mesDias = 'b';
	}
	else if ((mes==2))
		mesDias ='c';
	
	switch (mesDias)
	{
		case 'c':
			printf("O mês informado possui 28 ou 29 dias.\n");
			break;
		case 'a':
			printf("O mês informado possui 31 dias.\n");
			break;
		case 'b':
			printf("O mês informado possui 30 dias.\n");
			break;		
		default:
			printf("O número informado está incorreto.\n");
	}
}
