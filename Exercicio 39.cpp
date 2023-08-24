// Em diversas situa��es, � �til o uso de d�gitos verificadores. 
// D�gito verificador ou algarismo de controle � um mecanismo de autentica��o utilizado para verificar a validade e a autenticidade de um valor num�rico, 
// evitando dessa forma fraudes ou erros de transmiss�o ou digita��o. Uma das formas mais comuns de c�lculo de d�gito verificadores � o m�todo conhecido por m�dulo 11. 
// O c�lculo do DV no m�dulo 11 � feito, � feito como se segue: para calcular o primeiro d�gito verificador, cada d�gito do n�mero, come�ando da direita para a esquerda 
// (do d�gito menos significativo para o d�gito mais significativo) � multiplicado, na ordem, por 2, depois 3, depois 4 e assim sucessivamente, at� o primeiro d�gito do n�mero. 
// O somat�rio dessas multiplica��es dividido por 11. O resto desta divis�o (m�dulo 11) � subtra�do da base (11), o resultado � o d�gito verificador. 
// O Banco do Brasil utiliza o c�digo m�dulo 11, substituindo por X o valor do d�gito verificador quando este � 10. 
// Escreva um programa que receba um n�mero com os 4 primeiros d�gitos de uma ag�ncia e imprima o n�mero da ag�ncia completo (numero - dv). 
// Ag�ncia      Alg. 1    Alg. 2     Alg. 3     Alg. 4     DV 
// 4870-4        4          8         7            0      (4*5) + (8*4) + (7*3) + (0*2) = 73     
// 														  73 mod 11 = 7 --- 11-7 = 4
// 4881-X        4          4         4            1      (4*5) + (8*4) + (8*3) + (1*2) = 78 
// 														  78 mod 11 = 1 --- 11 - 1 = 10 (X) 

#include <stdio.h>
#include <locale.h>

main () {
	
	int numero, nr1, nr2, nr3, nr4, dv;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe um n�mero de 4 digitos para c�lculo do seu d�gito verificador: ");
	scanf("%d", &numero);
	
	nr4=(numero/1000);
	nr3=((numero%1000)/100);
	nr2=(((numero%1000)%100)/10);
	nr1=(((numero%1000)%100)%10);
	
	dv=(11-(((nr1*2)+(nr2*3)+(nr3*4)+(nr4*5))%11));
	
	if (dv==10)
		printf("O n�mero completo � %d-X.\n", numero);
	else
		printf("O n�mero completo � %d-%d.\n", numero, dv);
	

}

