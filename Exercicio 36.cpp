// Em uma certificação são feitos são feitos 5 exames (I, II, III, IV e V). 
// Escreva um programa que leia as notas destes exames e imprima a classificação do aluno, sabendo que a média é 70. 
// Classificação: 
// A - passou em todos os exames; 
// B - passou em I, II e IV, mas não em III ou V; 
// C - passou em I e II, III ou IV, mas não em V. 
// Reprovado - outras situações. 

#include <stdio.h>
#include <locale.h>

main (){
	
	int I, II, III, IV, V;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a nota do exame I: ");
	scanf("%d", &I);
	printf("Informe a nota do exame II: ");
	scanf("%d", &II);
	printf("Informe a nota do exame III: ");
	scanf("%d", &III);
	printf("Informe a nota do exame IV: ");
	scanf("%d", &IV);
	printf("Informe a nota do exame V: ");
	scanf("%d", &V);
	
	if ((I>=70) && (II>=70) && (III>=70) && (IV>=70) && (V>=70))
		printf("O aluno passou com a classificação A.");
	
	else if (((I>=70) && (II>=70) && (IV>=70) && (III<70)  && (V>=70)) || ((I>=70) && (II>=70) && (III>=70) && (IV>=70) && (V<70)) )
		printf("O aluno passou com a classificação B.");
	
	else if ((I>=70) && (II>=70) && ((III>=70) || (IV>=70)) && (V<70))
		printf("O aluno passou com a classificação C.");
	
	else
		printf("O aluno foi reprovado.\n");
}

