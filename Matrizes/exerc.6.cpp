#include <stdio.h>

void lerMatriz(int linha, int coluna, int mat[4][4]);
void escreverMatriz(int linha, int coluna, int mat[4][4]); 
void soma_diagonal(int linha, int coluna, int mat[4][4]);

main(){
	int a[4][4];
	printf("escreva os elementos da matriz A: ");
	lerMatriz(4,4,a);
	printf("***Elementos da Matriz A***\n");
	escreverMatriz(4,4,a);
	soma_diagonal(4,4,a);
}


void lerMatriz(int linha, int coluna, int mat[4][4]){
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			scanf("%d",&mat[i][j]);
		}
	}
}


void escreverMatriz(int linha, int coluna, int mat[4][4]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}


void soma_diagonal(int linha, int coluna, int mat[4][4]){
	int contador=0;
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			if(i==j){
				contador+= mat[i][j];
			}
		}
	}
	printf("\na soma dos elementos na diagonal: %d",contador);
}
