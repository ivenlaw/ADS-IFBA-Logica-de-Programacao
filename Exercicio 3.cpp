//Dado o tamanho do raio de uma circunfer�ncia, calcular a �rea e o per�metro da mesma.
// A �rea da circunfer�ncia � igual ao produto do pi pelo quadrado do raio
// O comprimento ou per�metro da circunfer�ncia � dado pelo produto de pi pelo dobro do raio

#include <stdio.h>
#include <math.h>

main ()
{
	int raio = 6;
	float area, perimetro;
	
	area = 3.14 * pow(raio, 2);
	perimetro = 3.14 * raio * 2;
	
	printf("Uma circunferencia de raio %d possui area de %.2f e perimetro %.2f", raio, area, perimetro);
}
