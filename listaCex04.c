#include<stdio.h>
#include<locale.h>
//4- Fa�a um programa que calcule a soma de N n�meros quaisquer fornecidos pelo usu�rio . O valor de N
//deve ser tamb�m dado pelo usu�rio (sugere-se que N seja o primeiro valor fornecido).


//calcule a soma de N n�meros quaisquer fornecidos pelo usu�rio
int main()
{
		setlocale(LC_ALL,"");
		int n,c,soma,resultado;
		
		c=1;
		resultado=0;
			
			printf("Informe a quantidade de numeros a serem somados: ");
			scanf("%i",&soma);
			
		while(c<=soma)
		{
			printf("Digite um numero: ");
			scanf("%i",&n);
			resultado=resultado+n;
			c++;	
		}
		printf("%i",resultado);
	
	return 0;
}
