#include<stdio.h>
#include<locale.h>
/*
	5- Escreva um programa que calcule a soma de N números quaisquer fornecidos p e lo u s uário . O
	rograma deve parar de ler (e portanto somar) valores quando for introduzido o número 0 (zero).
*/
int main()
{
		setlocale(LC_ALL,"");
		int n,c,soma,resultado;
		
			printf("Informe a quantidade de numeros a serem somados: ");
			scanf("%i",&soma);
			c=0;
			resultado=0;
			
			while(c<soma)
			{
				printf("Digite um numero: ");
				scanf("%i",&n);
			
				
				if(n>0)
				{
						resultado=resultado+n;
						c++;
				}
				else
				{
					c=soma;
				}
			}
				printf("Soma de todos os numero é: %i",resultado);
		
	return 0;
}
