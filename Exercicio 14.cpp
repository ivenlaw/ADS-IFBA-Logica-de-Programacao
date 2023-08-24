// Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre (fica verde), os veículos que nele estavam parados 
// tendem a encontrar os próximos semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam abrir um pouco depois,
// dependendo da velocidade permitida na via e da distância entre eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir
// a velocidade permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para percorrer essa distância. 
// Para que encontre o próximo semáforo aberto, este deve abrir um pouco antes da chegada do veículo (por ex: 3 segundos antes).  
// Faça assim um algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes informações: 

// a. a distância desde o semáforo anterior 
// b. a velocidade permitida da via 
// c. a aceleração típica dos carros

// Movimento Uniforme S = So + v*t; sendo:
// s: posição do corpo em um determinado tempo (m)
// so: posição inicial do movimento (m)
// v: velocidade (m/s)
// t: intervalo de tempo (s)

// Movimento Variado Sf = So + Vo *t + (a.t²)/2	 e Vf = Vo + a*t
// "SF e So - posição final e inicial e Vf e Vo é velocidaade Final e inicial
// a - aceleração (m/s)
// t - intervalo de tempo (s)"

// não consegui onferir, mas acredito q falta conversoes de km/h para m/s

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
