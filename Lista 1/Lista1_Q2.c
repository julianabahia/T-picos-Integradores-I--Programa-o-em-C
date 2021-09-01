/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//////Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, total;
    int vendas, vendas_totais;
    
	printf("Quantas vendas foram realizadas? \n");
	scanf("%d", &vendas);
	salario = 3300.00;
	
	if (vendas <= 0){
		printf("ERRO! Vendas negativas ou igual a 0");
	}
	else{
	    vendas_totais = vendas*10.00;
		total = ((vendas_totais*0.03) + vendas_totais + salario);
		printf("O salário total é: %f", total);

	}
	
	system("pause");
	return 0;
}
