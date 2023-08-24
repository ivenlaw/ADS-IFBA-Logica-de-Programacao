// Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um valor de temperatura em Fahrenheit e exibi-lo em Celsius


#include <stdio.h>

main ()
{
	
	float temp_f, temp_c;
	
	printf("Informe uma temperatura em Fahrenheit: \n");
	scanf("%f", &temp_f);
	temp_c = (temp_f - 32)*5/9;
	
	printf("A temperatura %.0f Fahrenheit equilave a %.0f Celsius\n", temp_f, temp_c);
	
}
