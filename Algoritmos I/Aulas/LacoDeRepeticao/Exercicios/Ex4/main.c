#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int escolha;
	int votoJogo, votoDLC, qtdJogadores=0, qtdMine=0, qtdBat=0;
	int qtdDLC=0, qtdBee, qtdCute, qtdNinjas = 0, qtdVeihcle, qtdMedic;
	float resultadoDLC;
	
	do {
		printf("----------MENU----------\n");
		printf("0 - Sair \n");
		printf("1 - Votar no jogo\n");
		printf("2 - Votar na DLC\n");
		printf("3 - Imprimir quantos jogadores votaram\n");
		printf("4 - Imprimir quantos votos cada jogo recebeu\n");
		printf("5 - Imprimir quantos votos cada DLC recebeu\n");
		printf("6 - Imprimir jogo mais votado\n");
		printf("7 - Imprimir DLC escolhida\n");
		
		
		printf("Escolha uma das opcoes acima: ");
		scanf("%d", &escolha);
		
		
		
		switch(escolha){
			case 1:
				qtdJogadores++;
				printf("----- JOGOS -----\n");
				printf("100		Minecraft\n");
				printf("101		Battlefield 1\n");
				printf("Digite sua escolha: ");
				scanf("%d", &votoJogo);
				
				if (votoJogo==100) {
					qtdMine++;
				} else if (votoJogo == 101) {
					qtdBat++;
				} else {
					printf("Voto inválido!");
				}
                break;
                
            case 2:
            	qtdJogadores++;
            	printf("----- DLC's -----\n");
				printf("1001		Bee Kingdom\n");
				printf("1002		Cute teens\n");
				printf("1003		Ninjas HD\n");
				printf("1010		Kit vehicle\n");
				printf("1011		Kit medic\n");
				printf("Digite sua escolha: ");
				scanf("%d", &votoDLC);
				
				
				
				switch(votoDLC){
					case 1001:
						qtdBee++;
						qtdDLC++;
						break;
					case 1002:
						qtdCute++;
						qtdDLC++;
						break;
					case 1003:
						qtdNinjas++;
						qtdDLC++;
						break;
					case 1010:
						qtdVeihcle++;
						qtdDLC++;
						break;
					case 1011:
						qtdMedic++;
						qtdDLC++;
						break;
				} 
				break;
                
			case 3:
				printf("%d jogadores votaram.\n", qtdJogadores);
				break;
				
			case 4:
				printf("Minecraft recebeu %d votos.\n", qtdMine);
				printf("Battlefield 1 recebeu %d votos.\n", qtdBat);
				break;
				
			case 5:
				printf("A DLC Bee Kingdom recebeu %d votos.\n", qtdBee);
				printf("A DLC Cute teens recebeu %d votos.\n", qtdCute);
				printf("A DLC Ninjas HD recebeu %d votos.\n", qtdNinjas);
				printf("A DLC Kit vehicle recebeu %d votos.\n", qtdVeihcle);
				printf("A DLC Kit medic recebeu %d votos.\n", qtdMedic);
				break;
				
			case 6:
				if(qtdMine>qtdBat) {
					printf("O jogo mais votado foi o Minecraft \n");
				}else if (qtdMine<qtdBat) {
					printf("O jogo mais votado foi Battlefield 1\n");
				} else if(qtdMine==qtdBat) {
					printf("Empate\n");
				}
				break;
				
			case 7:
				
				resultadoDLC = qtdDLC * 0.2;
				
				if (qtdBee > resultadoDLC) {
			        printf("A DLC mais votada foi Bee Kingdom!\n");
			    } else if (qtdCute > resultadoDLC) {
			        printf("A DLC mais votada foi Cute teens!\n");
			    } else if (qtdNinjas > resultadoDLC) {
			        printf("A DLC mais votada foi Ninjas HD!\n");
			    } else if (qtdVeihcle > resultadoDLC) {
			        printf("A DLC mais votada foi Kit vehicle!\n");
			    } else if (qtdMedic > resultadoDLC) {
			        printf("A DLC mais votada foi Kit medic!\n");
			    } else {
			    	printf("Empate!");
				}
				break;
		}
	} while(escolha!=0);
	printf("Encerrando...");
}
