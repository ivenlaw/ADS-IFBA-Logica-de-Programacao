// Em uma cidade se deseja sincronizar os sem�foros. Com isto, quando um sem�foro abre (fica verde), os ve�culos que nele estavam parados 
// tendem a encontrar os pr�ximos sem�foros tamb�m abertos. Para que isto seja feito, os pr�ximos sem�foros precisam abrir um pouco depois,
// dependendo da velocidade permitida na via e da dist�ncia entre eles. Assim, ao abrir o sem�foro, um ve�culo come�a a acelerar at� atingir
// a velocidade permitida, que mant�m at� chegar ao pr�ximo sem�foro, levando um certo tempo para percorrer essa dist�ncia. 
// Para que encontre o pr�ximo sem�foro aberto, este deve abrir um pouco antes da chegada do ve�culo (por ex: 3 segundos antes).  
// Fa�a assim um algoritmo que informe quanto tempo depois um sem�foro deve abrir, dada as seguintes informa��es: 

// a. a dist�ncia desde o sem�foro anterior 
// b. a velocidade permitida da via 
// c. a acelera��o t�pica dos carros

// Movimento Uniforme S = So + v*t; sendo:
// s: posi��o do corpo em um determinado tempo (m)
// so: posi��o inicial do movimento (m)
// v: velocidade (m/s)
// t: intervalo de tempo (s)

// Movimento Variado Sf = So + Vo *t + (a.t�)/2	 e Vf = Vo + a*t
// "SF e So - posi��o final e inicial e Vf e Vo � velocidaade Final e inicial
// a - acelera��o (m/s)
// t - intervalo de tempo (s)"

// n�o consegui onferir, mas acredito q falta conversoes de km/h para m/s

#include <stdio.h>
#include <math.h>

main ()
{
	float Sf, Vm, tu, a, tv, d;
	
	printf("Qual a distancia entre os semaforos? ", d);
	scanf("%f", &d);
	printf("\nQual a velocidade permitida na via? ", Vm);
	scanf("%f", &Vm);
	printf("\nQual a velocidade tipica dos carros?", a);
	scanf("%f", &a);
	
	tv = Vm/a;
	Sf = (a * (pow(tv,2)))/2;
	
	if(Sf>=d)
		printf("\nO semaforo deve abrir em %.0f segundos apos o primeiro", tv-3);
		
	if(Sf<d)
	{
		tu = (d-Sf)/Vm;
		printf("\nO semaforo deve abrir em %.0f segundos apos o primeiro", tv+tu-3);
	}
}
