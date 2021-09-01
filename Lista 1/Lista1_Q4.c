//////Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo, novo_saldo, cheque_especial, valor_operacao, ncheque_especial;
    int tipo_operacao, conta;
	printf("Qual o número da conta? \n");
	scanf("%d", &conta);
	printf("Qual o saldo da conta? \n");
	scanf("%f", &saldo);
	printf("Qual a operação desejada? Digite 1 para depósito e 2 para retirada. \n");
	scanf("%d", &tipo_operacao);
	printf("Qual o valor da operação desejada? \n");
	scanf("%f", &valor_operacao);
	
	cheque_especial = 2000.00;
	
	if (conta && tipo_operacao && saldo && valor_operacao <= 0){
		printf("ERRO! Tipo de operação, conta, saldo ou valor da operação não identificados.");
	}
	else{
		if (tipo_operacao == 1){
			novo_saldo = saldo + valor_operacao;
			printf("O novo saldo total é %.2f após o depósito.", novo_saldo);
		}
		else if (tipo_operacao == 2){
			if (valor_operacao > saldo){
			    ncheque_especial = (saldo - valor_operacao) + cheque_especial;
			    novo_saldo = ncheque_especial - cheque_especial;
			    printf("Seu saldo era insuficiente, você entrou no Cheque Especial. O novo saldo total é %.2f e do cheque especial é %.2f após a retirada.", novo_saldo, ncheque_especial);
			} else{
    			novo_saldo = saldo - valor_operacao;
    			printf("O novo saldo total é %.2f após a retirada.", novo_saldo);
			}
		}

	}
	
	system("PAUSE");
	return 0;

}



