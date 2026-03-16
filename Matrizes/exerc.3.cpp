#include <stdio.h>

void lermatriz(int linha,int coluna, int mat[3][5]);
void escrevematriz(int linha, int coluna, int mat[3][5]);
void encontre(int linha,int coluna,int mat[3][5]);

main(){
	int a[3][5];
	printf("Digite os elementos dos vetores: ");
	lermatriz(3,5,a);
	printf("Matriz real:\n");
	escrevematriz(3,5,a);
	encontre(3,5,a);
}

void lermatriz(int linha,int coluna, int mat[3][5]){
	int i,j;
	for(i = 0;i < linha;i++){
		for(j = 0;j < coluna;j++){
			scanf("%d",&mat[i][j]);
		}
	}
}

void escrevematriz(int linha, int coluna, int mat[3][5]){
	int i,j;
	for(i = 0;i < linha;i++){
		for(j = 0;j < coluna;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}

void encontre(int linha,int coluna,int mat[3][5]){
	int n,i,j;
	int posicao=-1,linha_num=0,coluna_num=0;
	printf("Qual numero voce quer encontra?: ");
	scanf("%d",&n);
	for(i = 0;i < linha;i++){
		for(j = 0;j < coluna;j++){
			if(n==mat[i][j]){
				posicao++;
				linha_num=i+1;
				coluna_num=j+1;
			}
		}
	}
	if(posicao==-1){
		printf("Numero nao encontrado");
	}
	else{
		printf("o numero %d foi encontardo na linha %d, na coluna %d",n,linha_num,coluna_num);
	}
}
