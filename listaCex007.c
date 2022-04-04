#include <stdio.h>
#include <locale.h>

/*
7- Uma pesquisa sobre o sabor de um novo refrigerante foi feita com várias pessoas. As mesmas
preenchiam uma tabela com 'O' de ótimo, 'B' de bom, 'R' de regular e 'U' de ruim. Faça um programa que
leia as respostas coletadas pela pesquisa (as letras 'O', 'B', 'R' e 'U') sendo que o fim das respostas será
indicado por um traço '-'. Outras letras devem ser desconsideradas. O programa deve também:
? indicar a quantidade de cada resposta,
? indicar o total de respostas,
? calcular a porcentagem de cada uma das respostas, e
? indicar se a soma de respostas 'O' e 'B' é maior ou não que a soma de respostas 'R' e 'U'.
*/
int main ()
{			
	setlocale(LC_ALL,"");
	
	int o=0, b=0, r=0, u=0; 
	int totalresp, soma1, soma2;
	int cento, cento2, cento3, cento4;
	
	char refri, resp;
	
	printf("pesquisa de sabor do um novo refrigerante refresca guela\n\n");
	printf("Digite o para otimo\n");
	printf("Digite b para bom\n");
	printf("Digite r para regular\n");
	printf("Digite u para ruim\n\n");
	
		do{
			printf("Digite sua opinião: ");
			scanf("%c",&refri);
			getchar();
			printf("\n");
			
			if(refri=='o'){
				o = o + 1;
			}
			else{
					if(refri=='b'){
						b = b + 1;
					}
					else{
							if(refri=='r'){
								r = r + 1;
							}
							else{
									if(refri=='u'){
										u = u + 1;
									}
							}
					}
			}
			
			printf("Deseja continuar a pesquisa?\ns/n: ");
			scanf("%c",&resp);
			getchar();
			printf("\n");
			
		}while(resp== 's');
		
			//total de respostas
			totalresp = o + b + r + u;
			
			//porcentagem de cada resposta
			cento = (o*100)/totalresp;
			cento2 = (b*100)/totalresp;
			cento3 = (r*100)/totalresp;
			cento4 = (u*100)/totalresp;
			
			soma1 = o + b;
			
			soma2 = r + u;
			
			if(soma1>soma2){
				
					printf("Resultado da pesquisa de sabor foi um sucesso !\n");
					printf("Tivemos mais respostas positivas\n\n");
					printf("Quantidade de pessoas que acharam otimo: %i\n",o);
					printf("Quantidade de pessoas que acharam bom: %i\n",b);
					printf("Quantidade de pessoas que acharam regular: %i\n",r);
					printf("Quantidade de pessoas que acharam ruim: %i\n\n",u);
					
					printf("Total de pessoas que fizeram parte da pesquisa: %i\n\n",totalresp);
					
					printf("Porcentagem de pessoas que acharam otimo: %i %%\n",cento);
					printf("Porcentagem de pessoas que acharam bom: %i %%\n",cento2);
					printf("Porcentagem de pessoas que acharam regular: %i %%\n",cento3);
					printf("Porcentagem de pessoas que acharam ruim: %i %%\n\n",cento4);
					
					
			}
			else{
					printf("Resultado da pesquisa de sabor foi negativo !\n");
					printf("Tivemos mais respostas que não gostaram do novo sabor\n\n");
					printf("Quantidade de pessoas que acharam otimo: %i\n",o);
					printf("Quantidade de pessoas que acharam bom: %i\n",b);
					printf("Quantidade de pessoas que acharam regular: %i\n",r);
					printf("Quantidade de pessoas que acharam ruim: %i\n\n",u);
					
					printf("Total de pessoas que fizeram parte da pesquisa: %i\n\n",totalresp);
					
					printf("Porcentagem de pessoas que acharam otimo: %i %%\n",cento);
					printf("Porcentagem de pessoas que acharam bom: %i %%\n",cento2);
					printf("Porcentagem de pessoas que acharam regular: %i %%\n",cento3);
					printf("Porcentagem de pessoas que acharam ruim: %i %%\n\n",cento4);
			}
			
			
	return 0;
}
