#include<stdio.h>
#include<locale.h>
//3- A tabuada de um determinado n�mero � uma tabela de produtos deste n�mero com os n�meros de 1 a 9.
//Escreva um programa que pe�a um n�mero ao usu�rio e imprima a tabuada deste n�mero na tela. Caso o
//valor dado seja inv�lido o programa deve apenas exibir uma mensagem de aviso. Escreva um programa
//usando cada estrutura de repeti��o estudada.


int main()
{
	// pe�a um n�mero ao usu�rio e imprima a tabuada deste n�mero na tela
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
