// Ler um número inteiro e exibir o seu sucessor.

#include <stdio.h>

main ()
{
	int numero, sucessor;
	printf("Digite um numero: \n");
	scanf("%d", &numero);
	sucessor = numero +1;
	printf("O sucessor do numero %d eh %d \n", numero, sucessor);
}
