// Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a 100. 

#include <stdio.h>
#include <stdlib.h>

main(){
	
	int i;
	
	i=1;
	
	while(i<=101){
		if(i%2==0){
			printf("%d, ", i);
			i++;
		}
		else
			i++;
			continue;
	}
}
