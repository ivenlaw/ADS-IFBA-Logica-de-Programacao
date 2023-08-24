// Uma financeira usa o seguinte critério para conceder empréstimos:
// o valor total do empréstimo deve ser até dez vezes o valor da renda mensal do solicitante 
// e o valor da prestação deve ser no máximo 30% da renda mensal do solicitante. 
// Escreva um programa que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado e o 
// número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou não ser concedido. 

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
		printf("Seu empréstimo foi aprovado. Irá pagar em %.0f parcelas de R$ %.2f", nrPrestacoes, prestacao);
		
	else if ((solicitado>emprestimoMax) || (prestacao>prestacaoMax))
		printf("Infelizmente o seu empréstimo não foi aprovado.\n");
}

