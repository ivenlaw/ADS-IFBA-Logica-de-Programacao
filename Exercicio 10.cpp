// Converter um inteiro informado menor que 32 para sua representação em binário

#include <stdio.h>

main()
{
	int numero, numero16, numero8, numero4, numero2, numero1;
	char letra16, letra8, letra4, letra2, letra1;
	printf("Digite um número menor que 32: \n");
	scanf("%d", &numero);
	
	if (numero>= 16)
	{	
		numero16 = numero - 16;
		letra16='1';
	}
	else 
	{
		letra16='0';
		numero16=numero;
	}
		if (numero16>=8)
		{
			numero8 = numero16 - 8;
			letra8='1';
		}
		else 
		{
			letra8='0';
			numero8=numero16;
		}
		
			if (numero8>= 4)
			{
				numero4 = numero8 - 4;
				letra4='1';
			}
			else 
			{
				letra4='0';
				numero4=numero8;
			}
				if (numero4>= 2)
				{
					numero2=numero4 - 2;
					letra2='1';
				}
				else
				{
					letra2='0';	
					numero2=numero4;
				 } 
					if (numero2=1)
					{
						letra1='1'; 
					}
					else (letra1='0');
	printf("O numero decimal %d eh representado em binario por 000%c%c%c%c%c", numero, letra16, letra8, letra4, letra2, letra1);
}


