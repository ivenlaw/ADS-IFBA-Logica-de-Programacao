//Dado o tamanho do lado de um quadrado, calcular a �rea e o per�metro do mesmo.
// O per�metro de um quadrado representa a soma dos comprimentos de todos os seus lados
// A �rea � o produto da base pela altura

#include <stdio.h>
#include <math.h>

main () {
	
	int lado = 5;
	
	int area = pow(lado, 2);
	
	int perimetro = lado * 4;
	
	printf("Um quadrado de lado %d possui area de %d e perimetro de %d\n", lado, area, perimetro);

}
