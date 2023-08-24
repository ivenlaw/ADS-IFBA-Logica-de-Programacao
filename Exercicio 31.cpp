// No Futebol Americano, usa-se o Quarterback Rating como um índice que indica o desempenho do quarterback (quando maior, melhor). 
// Ele é calculado como indicado a seguir: 
// Calcula-se o percentual de passes completados em relação aos passes tentados pelo quarterback. 
// Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, ajusta-se o valor para 2,375 ou 0, respectivamente). 
// Em seguida, calcula-se a razão de jardas passadas pela quantidade de passes tentados. 
// Deste valor, subtrai-se 3 e divide-se por 4. Novamente, este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, procede-se como no caso anterior). 
// Agora, calcula-se a razão de passes para touchdows pelo número de passes tentados. Divide-se o valor por 0,05. 
// Mais uma vez, este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, procede-se como de costume). 
// Então, calcula-se a razão entre passes interceptados e o número de passes tentados. Deste valor, subtrai-se 0,095 e divide-se o resultado por 0,04. 
// Como de praxe, este valor não deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado). 
// O quarterback rating é calculando somando-se as quatro parcelas anteriores, multiplicando a soma por 100 e dividindo-se o produto por 6. 

// Escreva um programa, que leia o número de passes tentados, o número de passes completos, o número de jardas passadas, o número de passes para touchdown 
// e o número de passes interceptados e informe o QB Rating do quarterback. 

// Ref de TOM BRADY em 2022: completados: 490, tentados: 733, jardas: 4,694, touch: 25, interceptados: 9

#include <stdio.h>
#include <locale.h>

main () {
	
	float c, j, t, i;
	float completados, tentados, jardas, touch, interceptados, qr;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf("Sobre o desempenho do quarterback, informe: \n");
	
	printf("- número de passes tentados: ");
	scanf("%f", &tentados);
	printf("\n- número de passes completos: ");
	scanf("%f", &completados);
	printf("\n- número de jardas passadas: ");
	scanf("%f", &jardas);
	printf("\n- número de passe para touchdown: ");
	scanf("%f", &touch);
	printf("\n- número de passes interceptados: ");
    scanf("%f", &interceptados);
	
	c = ((completados/tentados)-0.3)/0.2;
	j = ((jardas/tentados)-3)/4;
	t = ((touch/tentados)/0.5);
	i = ((interceptados/tentados)-0.095)/0.04;
//	printf("%f, %f, %f, %f", c, j, t, i);
	
	if (c<0)
		c=0;
	else if (c>2.375)
		c=2.375;
	
	if (j<0)
		j=0;
	else if	(j>2.375)
		j=2.375;
	
	if (t<0)
		t=0;
	else if	(t>2.375)
		t=2.375;
	
	if (i<0)
		i=0;
	else if	(i>2.375)
		i=2.375;	
	
//	printf("\n%f, %f, %f, %f", c, j, t, i);
	
	qr =((c+j+t+i)*100)/6;
	
	printf("O Quarterback Rating é %.2f", qr);
}
