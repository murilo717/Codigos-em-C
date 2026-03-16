#include <stdio.h>

void lermatriz(int linha, int coluna, int mat[4][3]);
void escrevermatriz(int linha, int coluna, int mat[4][3]);
void transposta(int linha, int coluna, int mat[4][3]);
void simetrica(int linha, int coluna, int mat[4][3]);
void maior_menor(int linha, int coluna, int mat[4][3]);

main(){
	char continuar;
	do
	{
		int escolha;
		int a[4][3];
		printf("leia um conjunto de elementos: ");
		lermatriz(4,3,a);
		printf("***conjuntos da matriz***\n");
		escrevermatriz(4,3,a);
		printf("escolha o que voce quer ver na matriz: ");
		scanf("%d",&escolha);
		switch(escolha){
			case 1:
				transposta(4,3,a);
				break;
			case 2:
				simetrica(4,3,a);
				break;
			case 3:
				maior_menor(4,3,a);
				break;
		}
		printf("\nQuer continuar [S][N]?: ");
		scanf(" %c",&continuar);
	}while(continuar=='S');
}


void lermatriz(int linha, int coluna, int mat[4][3]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			scanf("%d",&mat[i][j]);
		}
	}
}


void escrevermatriz(int linha, int coluna, int mat[4][3]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}


void transposta(int linha, int coluna, int mat[4][3]){
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			printf("%d ",mat[j][i]);
		}
		printf("\n");
	}
}


void simetrica(int linha, int coluna, int mat[4][3]){
	int contador=0;
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			if(i==j){
				contador=contador+mat[i][j];
			}
		}
	}
	printf("a soma da diagonal: %d",contador);
}


void maior_menor(int linha, int coluna, int mat[4][3]){
	int maior=mat[0][0], menor=mat[0][0];
	int maior_coluna=0, maior_linha=0;
	int menor_linha, menor_coluna=0;
	for(int i=0; i<linha; i++){
		for(int j=0; j<coluna; j++){
			if(mat[i][j] > maior){
				maior_linha = i;
				maior_coluna = j;
				maior = mat[i][j];
			}
			if(mat[i][j] < menor){
				menor_linha = i;
				menor_coluna = j;
				menor = mat[i][j];
			}
		}
	}
	printf("\no maior valor: %d",maior);
	printf("\no menor valor: %d",menor);
}
