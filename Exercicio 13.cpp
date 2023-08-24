// Um circuito el�trico � composto de duas resist�ncias R1 e R2 em paralelo, e ambas em sequ�ncia de uma resist�ncia R3. 
// Fa�a um algoritmo para calcular a resist�ncia equivalente desse circuito.

// Resistencia equivalente em circuito paralelo ==> 1/Req = 1/R1 + 1/R2 + 1/Rn
// Resistencia equivalente em circuito em serie ==> Req = R1+ R2 + Rn

#include <stdio.h>

main ()
{
	float R1 = 20;
	float R2 = 30;
	float R3 = 50;
	float Req = ( (R1 * R2)/(R1 + R2))+ R3;
	
	printf("Um circuito eletrico misto, com resistencias paralelas de %.0f e %.0f ohms e uma resistencia em serie de %.0f ohms, \npossui resistencia equivalente de %.2f ohms\n", R1, R2, R3, Req);
	
	
}




