#include <stdio.h>

void lerMatriz(int linha, int coluna, int mat[3][5]);
void escreverMatriz(int linha,int coluna,int mat[3][5]);
void soma(int linha,int coluna, int mat[3][5],int mata[3][5], int matb[3][5]);

main(){
	int a[3][5];
	int b[3][5];
	int c[3][5];
	printf("digite os elementos das matrizes A: ");
	lerMatriz(3,5,a);
	printf("\ndigite os elementos da matriz B: ");
	lerMatriz(3,5,b);
	printf("***conjunto matrizes A***\n");
	escreverMatriz(3,5,a);
	printf("***conjunto da matrizes B***\n");
	escreverMatriz(3,5,b);
	printf("\n***Resultado das matrizes***\n");
	soma(3,5,c,a,b);
	escreverMatriz(3,5,c);
}

void lerMatriz(int linha, int coluna, int mat[3][5]){
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			scanf("%d",&mat[i][j]);
		}
	}
}


void escreverMatriz(int linha,int coluna,int mat[3][5]){
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}

void soma(int linha,int coluna, int mat[3][5],int mata[3][5], int matb[3][5]){
	for(int i=0;i<linha;i++){
		for(int j=0;j<coluna;j++){
			mat[i][j]=mata[i][j]+matb[i][j];
		}
	}
}
