/* Um número se diz perfeito se é igual à soma de seus divisores próprios. 
Divisores próprios de um número positivo N são todos os divisores inteiros positivos de N exceto o próprio N. 
Por exemplo, o número 6, seus divisores próprios são 1, 2 e 3, cuja soma é igual à 6 (1 + 2 + 3 = 6). 
Outro exemplo é o número 28, cujos divisores próprios são 1, 2, 4, 7 e 14, e a soma dos seus divisores próprios é 28 (1 + 2 + 4 + 7 + 14 = 28). */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	
	int num;
	int soma=0;
	int i;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número: \n");
	scanf("%d", &num);
	
	for(i=1; i<=(num/2);i++){
		
		if(num%i==0){
			soma=soma+i;
		}else
			continue;
	}
	if(num==soma)
		printf("O número %d é perfeito.\n", num);
	else
		printf("O número %d não é perfeito.\n", num);

}
