/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

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
		printf("Valor total é: %f e o desconto foi de %f", total, desconto);
	}
	else if (90.00 <= preco <= 150.00){
	    desconto = preco*0.15;
		total = preco - desconto;
		printf("Valor total é: %f e o desconto foi de %f", total, desconto);
	}
	else if (preco < 90.00){
	    desconto = preco*0.10;
		total = preco - desconto;
		printf("Valor total é: %f e o desconto foi de %f", total, desconto);
	}

	system("pause");
	return 0;
}

