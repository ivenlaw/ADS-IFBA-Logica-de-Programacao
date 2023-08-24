// Um programa para gerenciar os saques de um caixa eletr�nico deve possuir algum mecanismo para decidir o n�mero de notas
// de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um poss�vel crit�rio seria o da 
// "distribui��o �tima" no sentido de que as notas de menor valor fossem distribu�das em n�mero m�nimo poss�vel. 
// Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar uma nota de R$ 50,00, tr�s notas 
// de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00. Escreva um programa que receba o valor da quantia solicitada e 
// retorne a distribui��o das notas de acordo com o crit�rio da distribui��o �tima (considere existir notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00). 

#include <stdio.h>

main ()
{
	int valorSaque, saqueTotal; 
	int nota100 = 0;
	int nota50 = 0;
	int nota20 = 0;
	int nota10 =0;
	int nota5 = 0; 
	int nota2 = 0;
	int nota1 = 0;
	
	printf("Qual o valor de seu saque? ");
	scanf("%d", &valorSaque);
	
	saqueTotal = valorSaque;
	
	if (valorSaque>=100){
		nota100 = valorSaque/100;
		valorSaque = valorSaque - (nota100*100);
	}
	if (valorSaque>= 50){
		nota50 = valorSaque/50;
		valorSaque = valorSaque - 50;
	}
	if (valorSaque>=20){
		nota20 = valorSaque/20;
		valorSaque = valorSaque - (nota20*20);
	}
	if (valorSaque>=10){
		nota10 = valorSaque/10;
		valorSaque = valorSaque - (nota10*10);
	}
	if (valorSaque>=5){
		nota5 = valorSaque/5;
		valorSaque = valorSaque - (nota5*5);
	}
	if (valorSaque>=2){
		nota2 = valorSaque/2;
		valorSaque = valorSaque - (nota2*2);
	}
	if (valorSaque==1){
		nota1=1;
	}
	
	printf("Seu saque de %d, sera efetivado com as seguintes notas: ", saqueTotal);
	printf("\n%d notas de R$ 100,00", nota100);
	printf("\n%d notas de R$ 50,00", nota50);
	printf("\n%d notas de R$ 20,00", nota20);
	printf("\n%d notas de R$ 10,00", nota10);
	printf("\n%d notas de R$ 5,00", nota5);
	printf("\n%d notas de R$ 2,00", nota2);
	printf("\n%d notas de R$ 1,00", nota1);
}



