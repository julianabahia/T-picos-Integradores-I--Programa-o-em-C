//////Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ricardo, conta;
    int joao, rodrigo;
	printf("Qual o valor da conta? \n");
	scanf("%f", &conta);
	
	if (conta <= 0){
		printf("ERRO! Conta negativa ou igual a	0!");
	}
	else{
			joao = conta/3;
			rodrigo = conta/3;
			ricardo = conta - (joao + rodrigo);
			conta -= ricardo;
			
			printf("João pagará: R$ %d \n", joao);
			printf("Rodrigo pagará: R$ %d \n", rodrigo);
			printf("Ricardo pagará: R$ %.2f \n", ricardo);			
	}
	
	system("pause");
	return 0;
}


