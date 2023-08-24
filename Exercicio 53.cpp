/* Dado um pa�s A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um pa�s B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, 
escreva um programa, que imprima o tempo necess�rio para que a popula��o do pa�s A ultrapasse a popula��o do pa�s B. */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int popA=5000000;
	int popB=7000000;
	int contAno;
	
	setlocale(LC_ALL, "Portuguese");

	while(popA<=popB){
		popA=popA+(popA*0.03);
		contAno=contAno+1;
		popB=popB+(popB*0.02);
	}
	printf("A popula��o do pa�s \"A\" ir� ultrapassar a do pa�s \"B\" e %d anos", contAno);
}

