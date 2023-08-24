// Escreva um programa que leia 3 números e calcule a média ponderada entre eles. 
// Considere que o maior número recebe peso 5 e os outros dois recebem peso 2,5. 

#include <stdio.h>
#include <locale.h>

main (){
	
	int num1, num2, num3, verificador, maior, peso1, peso2;
	float mediaP;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite 3 números: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if ( (num1>num2) && (num1>num3)){
		verificador=num1;
	}
	else if ((num2>num1) && (num2>num3)){
		verificador=num2;
	}
	else if ((num3>num1) && (num3>num2)){
		verificador=num3;
	}
	
	if ((num1==verificador))
		mediaP = ((num1*5)+(num2*2.5)+(num3*2.5))/(5+2.5+2.5);
	else if ((num2==verificador))
		mediaP = ((num2*5)+(num1*2.5)+(num3*2.5))/(5+2.5+2.5);
	else if ((num3==verificador))
		mediaP = ((num3*5)+(num1*2.5)+(num2*2.5))/(5+2.5+2.5);
	
	printf("A média ponderada dos números %d, %d e %d, com peso 5,00 para o maior valor e 2,5 para os demais, é %.2f.\n",num1, num2, num3, mediaP);
			
}
