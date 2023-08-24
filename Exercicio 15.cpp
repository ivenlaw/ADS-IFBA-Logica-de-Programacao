// Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. 
// Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, 
// faça um programa para ler os dados necessários e calcular a altura do prédio.

//Semelhança de triângulos: Princípio d Propagaçao Retilinia da Luz: ((altura do predio)/(minha altura)) = ((Sombra do predio)/(Minha sombra))

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
