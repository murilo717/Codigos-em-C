#include <stdio.h>
void lerMatriz(int linha,int coluna,int mat[][2]);
void escrevaMatriz(int linha,int coluna, int mat[][2]);
void produto(int linha, int coluna,int mat[][2]);

main(){
	int a[5][2];
	printf("leitura dos elementos da matriz: ");
	lerMatriz(5,2,a);
	printf("Imagem real da Matriz\n");
	escrevaMatriz(5,2,a);
	printf("o valor do produto dos elementos da Matriz");
	produto(5,2,a);
	return 0;
}

void lerMatriz(int linha,int coluna,int mat[][2]){
	int i,j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			scanf("%d",&mat[i][j]);
		}
	}
}

void escrevaMatriz(int linha,int coluna,int mat[][2]){
	int i,j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}

void produto(int linha, int coluna,int mat[][2]){
	int i,j;
	int prod=1;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			prod=prod*mat[i][j];
		}
	}
	printf("\nresultado: %d",prod);
}
