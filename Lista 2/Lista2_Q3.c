/******************************************************************************

Nome: Juliana Bahia || Matricula: 04071404 || Turma: ALC 0790104NMA

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(){
	int codigo, qtd_produto = 0, opcao;
	float total = 0;
	float desconto;
    
    printf("--------------------------------\n");
    printf("---------Móveis de Aço----------\n");
    printf("--------------------------------\n");
    
    do{
    	printf("\n");
    	printf("Digite uma opcao:\n");
    	printf("1 - selecionar produto;\n");
    	printf("2 - condição de pagamento;\n");
    	printf("3 - fechar compra;\n");
    	printf("\n");

    	if (opcao == 1){
        	printf("PRODUTO--------CODIGO----PREÇO(U)-\n");
        	printf("CADEIRA---------1001-------105,20-\n");
        	printf("SOFÁ------------1324-------600,99-\n");
        	printf("MESA------------6548-------300,00-\n");
        	printf("CAMA CASAL------9087------1500,00-\n");
        	printf("CAMA SOLTEIRO---7623-------999,99-\n");
        	printf("----------------------------------\n\n");
        	printf("Informe o código do produto:\n");
        	scanf("%d", &codigo);
        	printf("Informe a quantidade:\n");
        	scanf("%d", &qtd_produto);
        
        	switch(codigo){
        		case 1001:
        			total = total + (qtd_produto * 105.20);
        			break;
        		case 1324:
        			total = total + (qtd_produto * 600.99);
        			break;
        		case 6548:
        			total = total + (qtd_produto * 300.00);
        			break;
        		case 9087:
        			total = total + (qtd_produto * 1500.00);
        			break;
        		case 7623:
        			total = total + (qtd_produto * 999.99);
        			break;
        		default:
        		    printf("ERRO! Código não encontrado! Tente novamente.");
        	}
        	
        	printf("TOTAL A SER PAGO: R$%.2f\n", total);
        	printf("Deseja outro item? [1] - sim | [2] - não;\n");
        
    	}else if (opcao == 2){
        	printf("TIPO DE VENDA--------VALOR D0 DESCONTO--------CÓDIGO-----\n\n");
        	printf("VENDA A VISTA----------------10%%---------------620-------\n");
        	printf("VENDA A PRAZO 30 DIAS---------5%%---------------202-------\n");
        	printf("VENDA A PRAZO 60 DIAS--------S/DESC------------666-------\n");
        	printf("VENDA A PRAZO 90 DIAS-----ACRESC 5%%------------596-------\n");
        	printf("VENDA C/ CARTÃO DEBT----------8%%---------------420-------\n");
        	printf("VENDA C/ CARTÃO CRED----------7%%---------------392-------\n");
        	printf("---------------------------------------------------------\n\n");
        	printf("Informe a forma de pagamento desejado:\n");
        	scanf("%d", &codigo);
        
        	switch(codigo){
        		case 620:
        		    desconto = total * 0.10;
        		    total = total - desconto;
        			break;
        		case 202:
            		desconto = total * 0.05;
        		    total = total - desconto;
        			break;
        		case 666:
        		    desconto = total * 0;
        		    total = total - desconto;
        			break;
        		case 596:
            		desconto = total * 0.05;
        		    total = total + desconto;
        		    break;
        		case 420:
            		desconto = total * 0.08;
        		    total = total - desconto;
        			break;
        		case 392:
            		desconto = total * 0.07;
        		    total = total - desconto;
        			break;
        		default:
        		    printf("ERRO! Código não encontrado! Tente novamente.");
        	}
        
        	if (opcao > 3 || opcao <= 0){
        	    printf("ERRO! Opção inexistente.");
        	}
        	printf("\n");
        	printf("DIGITE [3] PARA FINALIZAR;\n");
        	
        	
    	}
        scanf("%d", &opcao);    	
        	
    	
    	
    }while (opcao != 3);
    
    printf("TOTAL A SER PAGO: R$%.2f\n", total);
    system("PAUSE");

}
