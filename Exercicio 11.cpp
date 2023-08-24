// Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota
// de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas

#include <stdio.h>

main()
{
	float prova1bi1, prova2bi1, prova1bi2, prova2bi2, notabi1, notabi2, medsem;
	
	printf("Informe a nota da primeira prova do primeiro bimestre: ");
	scanf("%f", &prova1bi1);
	printf("\nInforme a nota da segunda prova do primeiro bimestre: ");
	scanf("%f", &prova2bi1);
	printf("\nInforme a nota da primeira prova do segundo bimestre: ");
	scanf("%f", &prova1bi2);
	printf("\nInforme a nota da segunda prova do segundo bimestre: ");
	scanf("%f", &prova2bi2);
	
	notabi1 = (prova1bi1 + prova2bi1)/2;
	notabi2 = (prova1bi2 + prova2bi2)/2;
	
	medsem = (notabi1+notabi2)/2;
	
	printf("\nSuas notas do primeiro bimestre foram %.2f e %.2f. Do segundo foram %.2f e %.2f\n", prova1bi1, prova2bi1, prova1bi2, prova2bi2);
	printf("Suas medias bimestrais foram %.2f e %.2f\n", notabi1, notabi2);
	printf("Assim sua media semestral eh %.2f\n", medsem);
}
