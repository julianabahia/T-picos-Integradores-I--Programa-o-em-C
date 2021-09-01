
//////Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total, preco, desconto;
	printf("Qual o preço do produto? \n");
	scanf("%f", &preco);

	if (preco > 150.00){
	    desconto = preco*0.25;
		total = preco - desconto;
		printf("Valor total é: %.2f e o desconto foi de %.2f", total, desconto);
	}
	else if (90.00 <= preco <= 150.00){
	    desconto = preco*0.15;
		total = preco - desconto;
		printf("Valor total é: %.2f e o desconto foi de %.2f", total, desconto);
	}
	else if (preco < 90.00){
	    desconto = preco*0.10;
		total = preco - desconto;
		printf("Valor total é: %.2f e o desconto foi de %.2f", total, desconto);
	}

	system("pause");
	return 0;
}

