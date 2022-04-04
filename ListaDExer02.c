/*
Lista D
2- Elabore um programa que leia 7 números e os guarde em um vetor.
Depois leia os valores digitados e mostre a soma total.
*/

#include<stdio.h>
#include<locale.h>

#define QTD 7

int main()
{
	setlocale(LC_ALL, "");
	int valores[QTD], i, total;
	
	// leitura dos valores
	for(i=0;i<QTD;i++)	
	{
		printf("Informe o valor %i: ", i+1);
		scanf("%i", &valores[i]);
	}
	
	total = 0;
	for(i=0;i<QTD;i++)	
	{
		total = total + valores[i];
	}
	
	printf("Soma total: %i\n", total);
	return 0;
}
	
