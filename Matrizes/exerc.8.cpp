#include <stdio.h>

void lerMatriz(int linha, int coluna, int mat[5][5]);
void escreverMatriz(int linha, int coluna, int mat[5][5]);
void transposta(int linha, int coluna, int mat[5][5]);


main(){
	int a[5][5];
	printf("digite os elementos da matriz: ");
	lerMatriz(5,5,a);
	printf("***conjunto de elementos das Matrizes***\n");
	escreverMatriz(5,5,a);
	printf("Forma da Matriz transposta\n");
	transposta(5,5,a);
}


void lerMatriz(int linha, int coluna, int mat[5][5]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			scanf("%d",&mat[i][j]);
		}
	}
}


void escreverMatriz(int linha, int coluna, int mat[5][5]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}


void transposta(int linha, int coluna, int mat[5][5]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			printf("%d ",mat[j][i]);
		}
		printf("\n");
	}
}
