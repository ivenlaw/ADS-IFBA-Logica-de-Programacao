// Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa. 
// Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, 
// fa�a um programa para ler os dados necess�rios e calcular a altura do pr�dio.

//Semelhan�a de tri�ngulos: Princ�pio d Propaga�ao Retilinia da Luz: ((altura do predio)/(minha altura)) = ((Sombra do predio)/(Minha sombra))

#include <stdio.h>

main ()
{
	float hp;
	float mh = 1.64;
	float sp = 72;
	float ms = 3;
	
	hp = (sp*mh)/ms;
	
	printf("Dado um predio com sombra de %.2f e com base em minha altura de %.2f e minha sombra de %.2f, a altura estimada do predio eh de %.2f\n", sp, mh, ms, hp);
	
}
