// Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas de um ponto em um plano. 
// A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).

#include <stdio.h>
#include <locale.h>

main (){
	
	int x, y;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe os valores de 'x' e 'y': \n");
	scanf("%d %d", &x, &y);
	
	if (x==0 && y==0)	
		printf("O ponto (%d,%d) está localizado na origem.\n", x,y);
		
	else if (x>0 && y>0)
		printf("O ponto (%d,%d) está localizado no 1º quadrante.\n", x,y);
		
	else if (x<0 && y>0)
		printf ("O ponto (%d, %d) está localizado no 2º quadrante.\n", x,y);
		
	else if (x<0 && y<0)
		printf ("O ponto (%d, %d) está localizado no 3º quadrante.\n", x,y);
		
	else if (x>0 && y<0)
		printf ("O ponto (%d, %d) está localizado no 4º quadrante.\n", x,y);
}
