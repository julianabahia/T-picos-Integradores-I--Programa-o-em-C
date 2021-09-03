#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ricardo, conta, div_conta;
    int joao, rodrigo;
	printf("Qual o valor da conta? \n");
	scanf("%f", &conta);
	
	if (conta <= 0){
		printf("ERRO! Conta negativa ou igual a	0!");
	}
	else{
			joao = valor/3;
			rodrigo = valor/3;
			ricardo = valor - (joao + rodrigo);
			
			printf("João pagará: R$ %d", joao);
			printf("Ricardo pagará: R$ %d", ricardo);
			printf("Rodrigo pagará: R$ %.2f", rodrigo);			
	}
	
	system("pause");
	return 0;
}


