/* Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, 
escreva um programa, que imprima o tempo necessário para que a população do país A ultrapasse a população do país B. */


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
	printf("A população do país \"A\" irá ultrapassar a do país \"B\" e %d anos", contAno);
}

