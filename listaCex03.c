#include<stdio.h>
#include<locale.h>
//3- A tabuada de um determinado número é uma tabela de produtos deste número com os números de 1 a 9.
//Escreva um programa que peça um número ao usuário e imprima a tabuada deste número na tela. Caso o
//valor dado seja inválido o programa deve apenas exibir uma mensagem de aviso. Escreva um programa
//usando cada estrutura de repetição estudada.


int main()
{
	// peça um número ao usuário e imprima a tabuada deste número na tela
		setlocale(LC_ALL,"");
		int n1,c,resultado;
		
		printf("Digite um numero para ser multiplicado: ");
		scanf("%i",&n1);
		c=0;
		if(n1>0&& n1<10)
		{
			while(c<=10)
			{	
				resultado=n1*c;
				printf("%i X %i = %i\n",n1,c,resultado);
				c++;
			}
		}
		else
		{
			printf("Numero digitado invalido");
		}	
	return 0;
}
