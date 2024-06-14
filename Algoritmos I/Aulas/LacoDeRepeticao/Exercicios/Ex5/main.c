#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int escolha, produto,qtdMouse, qtdTeclado, qtdMonitor, qtdImpressora;
	float total, totMouse =0, totTeclado, totMonitor, totImpressora, mouse=19.90, teclado=100.00, monitor = 999.90, impressora = 1500.00;
	float desconto, descMouse = 0.1, descTeclado = 0.1, descMonitor = 0.1, descImpressora = 0.1;
	
	do {
		printf("----------MENU----------\n");
		printf("1 - Sair \n");
		printf("2 - Vender produto\n");
		printf("3 - Definir desconto da promocao Black Friday\n");
		printf("4 - Imprimir desconto dos produtos\n");
		printf("5 - Mostrar quantia Vendida por produto em reais\n");
		
		
		printf("Escolha uma das opcoes acima: ");
		scanf("%d", &escolha);
		
		
		
		switch(escolha){
			case 2:
				printf("----- PRODUTOS -----\n");
				printf("Código		Nome		Preco\n");
				printf("1000		Mouse		19,90\n");
				printf("1001		Teclado		100,00\n");
				printf("1002		Monitor		999,99\n");
				printf("1003		Impressora	1500,00\n");
				printf("Digite sua escolha: ");
				scanf("%d", &produto);
				
				if (produto==1000) {
					printf("Digite a quantidade: ");
					scanf("%d", &qtdMouse);
					totMouse += (qtdMouse*mouse)*(1-descMouse);
				} else if (produto == 1001) {
					printf("Digite a quantidade: ");
					scanf("%d", &qtdTeclado);
					totTeclado += (qtdTeclado*teclado)*(1-descTeclado);
				} else if (produto == 1002){
					printf("Digite a quantidade: ");
					scanf("%d", &qtdMonitor);
					totMonitor += (qtdMonitor*monitor)*(1-descMonitor);
				} else if (produto == 1003) {
					printf("Digite a quantidade: ");
					scanf("%d", &qtdImpressora);
					totImpressora += (qtdImpressora*impressora)*(1-descImpressora);
				} else {
					printf("Opção inválida!\n");
				}
                break;
                
            case 3:
            	printf("----- DESCONTOS -----\n");
				
				printf("Qual produto deseja alterar o desconto?");
				printf("Código		Nome		Preco\n");
				printf("1000		Mouse		19,90\n");
				printf("1001		Teclado		100,00\n");
				printf("1002		Monitor		999,99\n");
				printf("1003		Impressora	1500,00\n");
				printf("Digite sua escolha: ");
				scanf("%d", &produto);
			
				switch(produto){
					case 1000:
						printf("Quanto de desconto (em %) pretende aplicar? \n");
						scanf("%f", &desconto);
						descMouse = desconto/100;
						break;
					case 1001:
						printf("Quanto de desconto (em %) pretende aplicar? \n");
						scanf("%f", &desconto);
						descTeclado = desconto/100;
						break;
					case 1002:
						printf("Quanto de desconto (em %) pretende aplicar? \n");
						scanf("%f", &desconto);
						descMonitor = desconto/100;
						break;
					case 1003:
						printf("Quanto de desconto (em %) pretende aplicar? \n");
						scanf("%f", &desconto);
						descImpressora = desconto/100;
						break;
				} 
				break;
                
			case 4:
				printf("Código		Nome		Desconto\n");
				printf("1000		Mouse		%1.f%%\n", descMouse*100);
				printf("1001		Teclado		%1.f%%\n", descTeclado*100);
				printf("1002		Monitor		%1.f%%\n", descMonitor*100);
				printf("1003		Impressora	%1.f%%\n", descImpressora*100);
				break;
				
			case 5:
				printf("Foram vendidos R$%.2f em mouses.\n", totMouse);
				printf("Foram vendidos R$%.2f em teclados.\n", totTeclado);
				printf("Foram vendidos R$%.2f em monitores.\n", totMonitor);
				printf("Foram vendidos R$%.2f em impressoras.\n", totImpressora);
				break;
				
		
		}
	} while(escolha!=1);
	printf("Encerrando...");
}
