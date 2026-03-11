#include <stdio.h>

int main(){
	char escolha;
	do{
		float n1,n2,resultado;
		int operador;
		
		printf("1* valor: ");
		scanf("%f",&n1);
		printf("\n2* valor: ");
		scanf("%f",&n2);
			
		printf("1-somar");
		printf("\n2-subtrair");
		printf("\n3-multiplicar");
		
		printf("\nagora escolha como quer calcular:");
		scanf("%d",&operador);
		
		switch(operador){
			case 1: resultado = n1 + n2;
				printf("voce escolheu soma");
				printf("\nresultado: %f",resultado);
				break;
			case 2: resultado = n1 - n2;
				printf("voce escolheu subtrair");
				printf("\nresultado: %f",resultado);
				break;
			case 3: resultado = n1 * n2;
				printf("voce escolheu multiplicar");
				printf("\nresultado: %f",resultado);
				break;
		}
		printf("\nGostaria de continuar calculando?: ");
		scanf(" %c", &escolha);
	}while(escolha == 's');
	return 0;
}
