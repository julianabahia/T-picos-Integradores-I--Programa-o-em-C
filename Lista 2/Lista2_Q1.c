/******************************************************************************

Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(){
 int u;
    int horas_norm[u];
    int horas_ext[u];
    int funcionarios[u];
    float bruto = 0;
    float liquido = 0;
    float extra, normal;

    
    printf("Informe a quantidade de funcionários: ");
    scanf("%d", &u);

    
    for(int i = 0; i < u; i++){
        
        printf("\n");
        printf("Informe as horas normais trabalhadas do funcionario %d: ", i+1);
        scanf("%d", &horas_norm[i]);
        printf("Informe as horas extras trabalhadas do funcionario %d: ", i+1);
        scanf("%d", &horas_ext[i]);
        
    }
    
    for(int i = 0; i < u; i++){
        
        extra = 15.00;
        normal = 10.00;
        bruto = (extra * (int) horas_ext[i]) + (normal * (int) horas_norm[i]);
        liquido = bruto - (bruto * 0.10);
        
        printf("\n");
        printf("O salário bruto do funcionario %d é: %.2f \n", bruto);
        printf("O salário bruto do funcionario %d é: %.2f \n", liquido);
        
    }
    
    system("PAUSE");
    
    return 0;
}
