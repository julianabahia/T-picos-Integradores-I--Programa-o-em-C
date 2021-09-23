/******************************************************************************

Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int u;
    float salario[u];
    int matricula[u];
    int funcionarios[u];
    float total = 0;
    float media = 0;
    float menor, maior;
    int min_mat, max_mat;
    
    printf("Informe a quantidade de funcionários: ");
    scanf("%d", &u);

    
    for(int i = 0; i < u; i++){
        
        printf("\n");
        printf("Informe o salário do funcionário %d: ", i+1);
        scanf("%f", &salario[i]);
        printf("Informe a matrícula do funcionário %d: ", i+1);
        scanf("%d", &matricula[i]);
        
    }
    
    for(int i = 0; i < u; i++){
        
        total = total + salario[i];
        media = total/(float) u;
        menor = salario[0];
        maior = salario[0];
        min_mat = matricula[0];
        max_mat = matricula[0];
        
        if (salario[i] < menor){
            menor = salario[i];
            min_mat = matricula[i];
        }
        
        if (salario[i] > maior){
            maior = salario[i];
            max_mat = matricula[i];
        }
        
    }
    printf("\n");
    printf("Total dos salários é: %.2f \n", total);
    printf("A média dos salários é: %.2f \n", media);
    printf("O maior dos salários é %.2f e pertence ao funcionário de matrícula %d.\n", maior, max_mat);
    printf("O menor dos salários é %.2f e pertence ao funcionário de matrícula %d.\n", menor, min_mat);
    
    system("PAUSE");
    
    return 0;
}

