// Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.

#include <stdio.h>

main ()
{
	int idadeDias, idadeAnos, idadeMeses, idadeRestoDias;
	
	printf("Informe uma idade em dias: \n");
	scanf("%d", &idadeDias);
	
	idadeAnos = idadeDias/360;
	idadeMeses = (idadeDias%360)/30;
	idadeRestoDias = idadeDias - (idadeAnos*360) - (idadeMeses*30);
	
	printf("%d dias de idade representam %d anos, %d meses e %d dias de vida\n", idadeDias, idadeAnos, idadeMeses, idadeRestoDias);
}
