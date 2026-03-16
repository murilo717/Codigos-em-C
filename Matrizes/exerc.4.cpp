#include <stdio.h>

void lerMatriz(int linha, int coluna, int mat[3][4]);
void escreveMatriz(int linha, int coluna, int mat[3][4]);
void maior_menor(int linha, int coluna, int mat[3][4]);

main(){
	int a[3][4];
	printf("Escreva os elementos da Matriz:");
	lerMatriz(3,4,a);
	printf("***conjuntos da matriz***\n");
	escreveMatriz(3,4,a);
	maior_menor(3,4,a);
}

void lerMatriz(int linha, int coluna, int mat[3][4]){
	int menor, maior=0;
	int i,j;
	for(i=0 ;i < linha; i++){
		for(j=0 ;j < coluna; j++){
			scanf("%d",&mat[i][j]);
		}
	}
}

void escreveMatriz(int linha, int coluna, int mat[3][4]){
	int i,j;
	for(i=0 ;i < linha; i++){
		for(j=0 ;j < coluna; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}

void maior_menor(int linha, int coluna, int mat[3][4]){
	int l_maior=0, l_menor=0;
	int c_maior=0, c_menor=0;
	int maior=mat[0][0], menor=mat[0][0];
	for(int i=0 ;i < linha; i++){
		for(int j=0 ;j < coluna; j++){
			if(mat[i][j] < menor){
				menor=mat[i][j];
				l_maior=i;
				c_maior=j;
			}
			if(mat[i][j] > maior){
				maior=mat[i][j];
				l_menor=i;
				c_menor=j;
			}
		}
	}
	printf("\no maior valor: %d",maior);
	printf("\no menor valor: %d",menor);
}
