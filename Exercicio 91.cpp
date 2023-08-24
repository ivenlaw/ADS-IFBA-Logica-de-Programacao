// Elabore um programa em C que leia valores inteiros para preencher uma matriz A 5 x 5. 
// Você deverá criar adicionalmente dois vetores de 5 elementos: somaLinhas e somaColunas. 
// Em cada posição do vetor somaLinhas deverá ser armazenada a soma da linha correspondente na matriz A. 
// Da mesma forma, em cada posição do vetor somaColunas deverá ser armazenada a soma da coluna correspondente na matriz A. 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


main () {
	
	int matrizA[5][5], somaLinhas[5], somaColunas[5];
	int i, j;
	
	setlocale(LC_ALL, "Portuguese"); 
	
	// Leitura da matriz
	for(i=0;i<5;i++){
		printf("Entre com os numeros da %d linha da matriz: \n", i+1);
		for(j=0;j<5;j++){
			do {
				scanf("%d", &matrizA[i][j]);
				if(matrizA[i][j]<0)
					printf("Informe apenas números positivos > 0!\n");
			} while (matrizA[i][j]<0);
		}
	}
	
	// vetor somaLinhas
	for(i=0;i<5;i++)
		somaLinhas[i]=0;
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			somaLinhas[i]=somaLinhas[i]+matrizA[i][j];
		}
	}

	// vetor somaColunas
	for(i=0;i<5;i++)
		somaColunas[i]=0;
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			somaColunas[i]=somaColunas[i]+matrizA[j][i];
		}
	}

	// impressao das tres matrizes
	
	for (i=0;i<5;i++) {
		printf("\n");
		for(j=0;j<5;j++) {
			printf("%8d", matrizA[i][j]);
		printf("\n");
		}
	}
	
	for (i=0;i<5;i++)
		printf("A soma da linha %d é %d.\n", i+1, somaLinhas[i]);
	
	for (i=0;i<5;i++)
		printf("A soma da coluna %d é %d.\n", i+1, somaColunas[i]);	
}
