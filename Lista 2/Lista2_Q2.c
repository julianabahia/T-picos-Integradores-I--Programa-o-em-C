/******************************************************************************

Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int u;
    int opcao;
    int qntd_estoque[u];
    char nome_merc[45];
    float valor_merc[u];
    float total = 0;
    float media = 0;
    
    printf("Informe a quantidade de mercadorias em estoque: ");
    scanf("%d", &u);

    do{
        for(int i = 0; i < (u - u) + 1; i++){
            
            printf("\n");
        	printf("Digite uma opcao:\n");
            printf("1 - inserir mercadoria;\n");
            printf("2 - estoque;\n");
            printf("3 - finalizar;\n");
            scanf("%d", &opcao);
            
                
            	if (opcao == 1){
            	    
            	    printf("\n");
                	printf("Qual o nome da mercadoria? ");
                	scanf("%s", &nome_merc);
                	printf("Informe o valor da mercadoria %s: ", nome_merc);
                	scanf("%f", &valor_merc[i]);
                	printf("Ainda há a mercadoria %s em estoque? [4] sim || [5] não.  ", nome_merc);
                	scanf("%d", &opcao);
                	
                	//total = total + (qntd_estoque[i] * valor_merc[i]);
            	}
            	
            	if (opcao == 2){
            	    printf("-MERCADORIA-------------------------QTD EM ESTOQUE-\n");
            	    for(int i = 0; i < u; i++){
            	        printf("--%s---------------------------------------%d------\n", nome_merc, (int) qntd_estoque[i]);
            	    }
            	    
            	    
            	}
            	
            	if (opcao == 4){
            	    
            	    printf("Qual a quantidade em estoque da mercadoria %s? ", nome_merc);
                	scanf("%d", &qntd_estoque[i]);
                	
                	if (qntd_estoque[i] > u){
                        printf("\n\nERRO! Quantidade de mercadoria mairo que a quna de mercadoria em estoque.\n\n");
                        break;
                    }
                	
                	total = total + (qntd_estoque[i] * valor_merc[i]);
                	
                	printf("Inserir outra mercadoria? [1] sim || [3] não.  ", nome_merc);
            	    scanf("%d", &opcao);
            	    
            	}
            	
            	if (opcao == 5){
            	    
            	    printf("Inserir outra mercadoria? [1] sim || [3] não.  ", nome_merc);
            	    scanf("%d", &opcao);
            	    
            	    total = total + (qntd_estoque[i] * valor_merc[i]);
            	    
            	}
                
                if (opcao > 5 || opcao <= 0){
                    printf("ERRO! Opção inexistente.");
                    break;
                }
            
            
        }
        
        
    }while (opcao != 3);
        
        for (int i = 0; i < u; i++){
            media = total/(float) u;
        }

        printf("\n");
        printf("Total do valor das mercadorias: R$%.2f\n", total);
        printf("Media do valor das mercadorias: R$%.2f\n", media);
        system("PAUSE");
        
        
        return 0;

}