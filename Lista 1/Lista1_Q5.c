/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//////Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco_flex, preco_premium, preco_gold, total;
    int tipo_racao, qtd_racao;
	printf("Qual a ração comprada? Digite 1 para flex, 2 para premium e 3 para gold. \n");
	scanf("%d", &tipo_racao);
	printf("Qual a quantidade (em sacos de 20kg)? \n");
	scanf("%d", &qtd_racao);
	
	preco_flex = 20.00;
	preco_premium = 30.00;
	preco_gold = 35.00;
	
	if (qtd_racao && tipo_racao <= 0){
		printf("ERRO! Tipo ou quantidade não identificados.");
	}
	else{
		if (tipo_racao == 1){
			total = (preco_flex*qtd_racao) - ((preco_flex*qtd_racao)*0.10);
			printf("O preço total é %f e o desconto foi de 10/100", total);
		}
		else if (tipo_racao == 2){
			total = (preco_premium*qtd_racao) - ((preco_premium*qtd_racao)*0.20);
			printf("O preço total é %f e o desconto foi de 20/100", total);
		}
		else if (tipo_racao == 3){
			total = (preco_gold*qtd_racao) - ((preco_gold*qtd_racao)*0.30);
			printf("O preço total é %f e o desconto foi de 30/100", total);
		}

	}
	
	//system("PAUSE");
	system("PAUSE");
	return 0;
}

