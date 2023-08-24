// Uma loja vende seus produtos no sistema 
// entrada mais duas presta��es, sendo a entrada maior do que ou igual �s duas presta��es, as quais devem ser iguais, inteiras e as maiores poss�veis. 
// Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas presta��es s�o iguais a R$ 90,00; 
// se o valor da mercadoria for R$ 302,75, a entrada � de R$ 102,75 e as duas presta��es s�o a iguais a R$ 100,00. 
// Escreva um programa que receba o valor da mercadoria e forne�a o valor da entrada e das duas presta��es, de acordo com as regras acima. 
// Observe que uma justificativa para a ado��o desta regra � que ela facilita a confec��o e o consequente pagamento dos boletos das duas presta��es. 

#include <stdio.h>

main (){
	
	int restoTotal, valorMercadoria;
	float entrada, prestacoes;
	
	printf("Insira o valor da mercadoria: ");
	scanf("%d", &valorMercadoria);
	
	restoTotal = valorMercadoria%3;
	prestacoes = (valorMercadoria - restoTotal)/3;
	
	entrada = prestacoes + restoTotal;
	
	printf("\nEssa mercadoria sera paga em 3 parcelas, sendo %.2f de entrada e 2 X de %.2f de prestacao. \n", entrada, prestacoes);
	
}


