#include<stdio.h>
#include<locale.h>
//1- Para ir à feira, uma dona de casa relacionou 10 produtos a serem comprados. 
//Elabore um programa
//que solicite o valor de cada produto e no final exiba o valor total da compra para a dona de casa.

int main()
{
	setlocale(LC_ALL,"");
	float produto,acumulado;
	int c;
	
	c=0;
	while(c<10)
	{
		printf("Digite o valor dos produtos comprados: ");
		scanf("%f",&produto);
		c=c+1;
		acumulado=acumulado+produto;
	}
	printf("%f",acumulado);
	
	
	
	
	return 0;
}

