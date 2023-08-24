// Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
// Os nomes dos termos de uma divisão são: dividendo, divisor, quociente e resto. 

#include <stdio.h>

main ()
{
	int dividendo, divisor, quociente, resto;
	
	printf("Digite dois numeros inteiros, iremos dividir o primeiro pelo segundo: \n");
	scanf("%d %d", &dividendo, &divisor);
	
	quociente = dividendo/divisor;
	resto = dividendo%divisor;
	
	printf("Ao dividirmos %d por %d, obtemos %d de quociente e %d de resto\n", dividendo, divisor, quociente, resto);
}
