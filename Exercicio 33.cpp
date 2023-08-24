// Escreva um algoritmo que leia 2 valores (x e y), que devem representar as coordenadas de um ponto em um plano. 
// A seguir, determine qual o quadrante ao qual pertence o ponto, ou se est� sobre um dos eixos cartesianos ou na origem (x=y=0).

#include <stdio.h>
#include <locale.h>

main (){
	
	int x, y;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe os valores de 'x' e 'y': \n");
	scanf("%d %d", &x, &y);
	
	if (x==0 && y==0)	
		printf("O ponto (%d,%d) est� localizado na origem.\n", x,y);
		
	else if (x>0 && y>0)
		printf("O ponto (%d,%d) est� localizado no 1� quadrante.\n", x,y);
		
	else if (x<0 && y>0)
		printf ("O ponto (%d, %d) est� localizado no 2� quadrante.\n", x,y);
		
	else if (x<0 && y<0)
		printf ("O ponto (%d, %d) est� localizado no 3� quadrante.\n", x,y);
		
	else if (x>0 && y<0)
		printf ("O ponto (%d, %d) est� localizado no 4� quadrante.\n", x,y);
}
