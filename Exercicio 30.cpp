// Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
// Álcool 
// Até 25 litros, desconto de 2% por litro 
// Acima de 25 litros, desconto de 4% por litro 
// Gasolina 
// Até 25 litros, desconto de 3% por litro 
// Acima de 25 litros, desconto de 5% por litro 
// Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), 
// calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,70 e o preço do litro do álcool é R$ 1,90. 


#include <stdio.h>
#include <locale.h>

main (){
	
	float alcoolDescMenor25 = 0.02;
	float alcoolDescMaior25 = 0.04;
	float gasolinaDescMenor25 = 0.03;
	float gasolinaDescMaior25 = 0.05;
	
	char tipoCombustivelVendido;
	float combustivelVendido, desconto, valorBruto, valorPago;
	
	float precoGasolina = 2.70;
	float precoAlcool = 1.90;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Digite o tipo de combustivel adquirido -> A-álcool ou G-gasolina: ");
	scanf ("%c", &tipoCombustivelVendido);
	
	printf("\nInforme a quantidade de combustível vendido: ");
	scanf("%f", &combustivelVendido);
	
	switch (tipoCombustivelVendido){
		case 'A':
			if (combustivelVendido<=25.00){
				valorBruto = (combustivelVendido*precoAlcool);
				desconto = (valorBruto*alcoolDescMenor25);
				valorPago = (valorBruto - desconto);
				break;
			}
			else {
				valorBruto = (combustivelVendido*precoAlcool);
				desconto = (valorBruto*alcoolDescMaior25);
				valorPago = (valorBruto - desconto);
				break;
			}
		case 'G':
			if (combustivelVendido<=25.00){
				valorBruto = (combustivelVendido*precoGasolina);
				desconto = (valorBruto*gasolinaDescMenor25);
				valorPago = (valorBruto - desconto);
				break;
			}
			else {
				valorBruto = (combustivelVendido*precoGasolina);
				desconto = (valorBruto*gasolinaDescMaior25);
				valorPago = (valorBruto - desconto);
				break;
			}
		default:
			printf("Tipo de combustível inválido. \n");	
	}
	
	printf("O valor a ser pago é de R$ %.2f.\n", valorPago);
}
