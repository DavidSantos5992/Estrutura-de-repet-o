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
	
	c = 0; // 1) incializar  
	a = 0;
	while(c<10) // 2) condição
	{
		printf("Informe o valor do produto: ");
		scanf("%f", &valor);
		c = c + 1; // 3) passo (1 em 1)
		a = a + valor; // acumular os valores
	}
	printf("Total da compra: R$ %f\n", a);
	return 0;
}

