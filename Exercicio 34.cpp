// Uma financeira usa o seguinte crit�rio para conceder empr�stimos:
// o valor total do empr�stimo deve ser at� dez vezes o valor da renda mensal do solicitante 
// e o valor da presta��o deve ser no m�ximo 30% da renda mensal do solicitante. 
// Escreva um programa que leia a renda mensal de um solicitante, o valor total do empr�stimo solicitado e o 
// n�mero de presta��es que o solicitante deseja pagar e informe se o empr�stimo pode ou n�o ser concedido. 

#include <stdio.h>
#include <locale.h>

main(){
	
	float emprestimoMax, renda, prestacaoMax, nrPrestacoes, prestacao, solicitado;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("Informe o valor de sua renda mensal: ");
	scanf("%f", &renda);
	printf("Informe o valor do emprestimo desejado: ");
	scanf("%f", &solicitado);
	printf("Informe o prazo de pagamento desejado (em meses): ");
	scanf("%f", &nrPrestacoes);
	
	emprestimoMax = renda*10;
	prestacaoMax = renda*0.3;
	prestacao = solicitado/nrPrestacoes;
	
	if ((solicitado<=emprestimoMax) && (prestacao<=prestacaoMax))
		printf("Seu empr�stimo foi aprovado. Ir� pagar em %.0f parcelas de R$ %.2f", nrPrestacoes, prestacao);
		
	else if ((solicitado>emprestimoMax) || (prestacao>prestacaoMax))
		printf("Infelizmente o seu empr�stimo n�o foi aprovado.\n");
}

