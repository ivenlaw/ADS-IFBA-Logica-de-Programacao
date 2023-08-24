//Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6.

#include <stdio.h>

main()
{
	float vel_ms, vel_kh;
	printf("Informe a velocidade em m/s: ");
	scanf("%f", &vel_ms);
	
	vel_kh = vel_ms * 3.6;
	
	printf("\nA velocidade de %.2f m/s equivale a %.2f km/h\n", vel_ms, vel_kh);
}


