#include <stdio.h>

void lerMatriz(int linha, int coluna, int mat[4][4]);
void escreverMatriz(int linha, int coluna, int mat[4][4]);
void soma_diagonal(int linha, int coluna, int mat[4][4]);

main(){
	int a[4][4];
	printf("leia uma quantidade de elementos da matriz: ");
	lerMatriz(4,4,a);
	printf("\n");
	printf("***conjunto de elementos da matriz***\n");
	escreverMatriz(4,4,a);
	soma_diagonal(4,4,a);
}


void lerMatriz(int linha, int coluna, int mat[4][4]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
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
				contador+=mat[i][linha-1-i];
			}
		}
	}
	printf("soma da diagonal secundaria: %d",contador);
}
