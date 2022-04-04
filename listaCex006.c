#include<stdio.h>
#include<locale.h>
//6- Calcule a média de N notas dos alunos de uma sala. O programa deve parar de ler valores quando for
//fornecido um valor negativo como nota.
int main()
{
	setlocale(LC_ALL,"");
	int c,nota,acumulado;
	float media;
	char resp;
	
	c=0;
	media=0;
	
	printf("Este programa calcula a média da sala\nPara Interromper a conta e mostrar o resultado insira um número negativo\n\n");
		do{
		
			printf("Digite nota: ");
			scanf("%i",&nota);
			
			c = c + 1;
			
			if(nota>0)
			{
				acumulado = acumulado + nota;
				media = acumulado / c;
			}
	
			
		}while(nota>0);
		
			printf("\n");
		
		printf("media: %.2f ",media);
	
		
			
	return 0;
}

