#include<stdio.h>

void leMatriz(int, int, int mat[][2]);
void escreveMatriz(int, int, int mat[][2]);
void somaMatriz(int, int, int[][2], int[][2]);

main(){
	int a[3][2], b[3][2];
	printf("Informe os valores para o conjunto A\n");
	leMatriz(3, 2, a);
	printf("Informe os valores para o conjunto B\n");
	leMatriz(3, 2, b);
	printf("\n*** Conjunto A ***\n");
	escreveMatriz(3, 2, a);
	printf("\n*** Conjunto B ***\n");	
	escreveMatriz(3, 2, b);
	somaMatriz(3, 2, a, b);
}

void leMatriz(int linha, int coluna, int mat[][2]){
	int i, j;
	for (i=0; i < linha; i++) {
		for (j=0; j < coluna; j++){
			scanf("%d",&mat[i][j]);
		}
	}
}

void escreveMatriz(int linha, int coluna, int mat[][2]){
	int i, j;
	for (i=0; i < linha; i++) {
		for (j=0; j < coluna; j++){
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
}

void somaMatriz(int linha, int coluna, int a[][2], int b[][2]){
	int i, j;
	int c[linha][2];
	for (i=0; i < linha; i++) {
		for (j=0; j < coluna; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n *** Os conjuntos somados ficaram: *** \n");
	escreveMatriz(3, 2, c);
}
