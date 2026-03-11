#include <stdio.h>

void propriedade(int num){
	int a,b,r;
	a = num / 100;
	b = num % 100;
	r =  a + b;
	if((r*r) == num){
		printf("Numero Mágico");
	}
	else{
		printf("Numero nao tem propriedade");
	}
}


void lernum(int numero){
	printf("Digite um numero de 4 digitos: ");
	scanf("%d",&numero);
	if((numero > 1000) || (numero < 9999)){
		propriedade(numero);
	}
	else{
		printf("ERRO, tente novamente");
	}
}

main(){
	int n,resposta;
	do{
		lernum(n);
		printf("\nDeseja continuar? digite 1: ");
		scanf("%d",&resposta);
	}while (resposta == 1);
}
