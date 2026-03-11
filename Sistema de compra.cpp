#include <stdio.h>
#include <string.h>

valores(int jg,int *valor){
	if(jg == 1){
		*valor = 25;
		printf("\nCall of duty esta por %d\n",*valor);
	}
	else
		if(jg == 2){
			*valor = 40;
			printf("\nAssassins Creed esta por %d\n",*valor);
		}
	else
		if(jg == 3){
			*valor = 55;
			printf("\nResident evil esta de %d\n",*valor);
		}
		else
			*valor = 0;
}


int main(){
	char auxi[10];
	char nome[10];
	int jogo, idade, ok, soma = 0;
	int val, csoma = 0, cont = 0;
	
	printf("\nQual o seu nome?:");
	scanf(" %s",&nome);
	fflush(stdin);
	do{
		
		printf("\nEncerre o programa discando 0\n");
		printf("1- Call of duty\n");
		printf("2- Assassins Creed\n");
		printf("3- Resident Evil\n");
		printf("Escolha qual jogo voce quer: ");
		scanf("%d",&jogo);
		
		valores(jogo, &val);
		soma = soma + val;
	}while(jogo != 0);
	
	printf("\na soma dos seus produtos: %d", soma);
		
		
}
