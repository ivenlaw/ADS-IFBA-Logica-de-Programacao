/* Um n�mero se diz perfeito se � igual � soma de seus divisores pr�prios. 
Divisores pr�prios de um n�mero positivo N s�o todos os divisores inteiros positivos de N exceto o pr�prio N. 
Por exemplo, o n�mero 6, seus divisores pr�prios s�o 1, 2 e 3, cuja soma � igual � 6 (1 + 2 + 3 = 6). 
Outro exemplo � o n�mero 28, cujos divisores pr�prios s�o 1, 2, 4, 7 e 14, e a soma dos seus divisores pr�prios � 28 (1 + 2 + 4 + 7 + 14 = 28). */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num;
	int soma=0;
	int i;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	for(i=1; i<=(num/2);i++){
		
		if(num%i==0){
			soma=soma+i;
		}else
			continue;
	}
	if(num==soma)
		printf("O n�mero %d � perfeito.\n", num);
	else
		printf("O n�mero %d n�o � perfeito.\n", num);

}
