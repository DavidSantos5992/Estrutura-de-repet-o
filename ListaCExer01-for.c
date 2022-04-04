/*1- Para ir à feira, uma dona de casa relacionou 
10 produtos a serem comprados. Elabore um programa
que solicite o valor de cada produto e no final 
exiba o valor total da compra para a dona de casa.*/

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int c;
	float valor, a;
	
	a = 0;
	for(c=0; c<10; c++)  // toinho=toinho+1 <=> toinho++
	{
		printf("Informe o valor do produto: ");
		scanf("%f", &valor);
		a = a + valor; // acumular os valores
	}
	printf("Total da compra: R$ %f\n", a);
	return 0;
}

