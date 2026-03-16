#include <stdio.h>

void lerMatriz(int linha, int coluna, int mat[4][3]);
int verificar_pontuacao(int linha, int coluna, int mat[4][3], int mat2[4][3]);
void printar_tabela(int lin, int col, int mat[4][3]);

main(){
	int a[4][3];
	printf("digite os dados para uma loteria esportiva:");
	lerMatriz(4,3,a);
	printf("Resultado do jogo\n");
	printar_tabela(4,3,a);
}


void lerMatriz(int linha, int coluna, int mat[4][3]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			if(j==0){
				printf("\nVitoria Time 1: ");
			}
			else
				if(j==1){
					printf("\nempate: ");
			}
			else
				if(j==2){
					printf("\nVitoria Time 2: ");
			}
			printf("\ndigite 1-confirmar ou 0-recusar:");
			scanf("%d",&mat[i][j]);
		}
	}
}


int verificar_pontuacao(int linha, int coluna, int mat[4][3], int mat2[4][3]){
	int pontuacao = 0;
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			if(mat[i][j]==1){
				if(mat[i][j]==mat2[i][j]){
					pontuacao++;
				}
			}
		}
	}
}


void printar_tabela(int lin, int col, int mat[4][3])
{
    printf("_____________");
    for(int i = 0; i < lin; i++)
    {
        printf("\n| %d | %d | %d |",mat[i][0],mat[i][1],mat[i][2]);
    }
    printf("\n-------------");
}    
