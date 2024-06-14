#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int escolha;
	int votoPrefeito, votoVereador, qtdEleitores=0, qtdNeo=0, qtdAgente=0;
	int qtdTrinity, qtdMorpheus, qtdCypher = 0, qtdBrown, qtdJones, qtdOraculo, qtdGaroto;
	
	do {
		printf("----------MENU----------\n");
		printf("0 - Sair \n");
		printf("1 - Votar para prefeito e vereador\n");
		printf("2 - Imprimir quantos eleitores votaram\n");
		printf("3 - Imprimir quantos votos cada prefeito recebeu\n");
		printf("4 - Imprimir quantos votos cada vereador recebeu\n");
		printf("5 - Imprimir quem foi eleito\n");
		
		
		printf("Escolha uma das opcoes acima: ");
		scanf("%d", &escolha);
		
		
		
		switch(escolha){
			case 1:
				printf("---Candidatos a prefeito---\n");
				printf("99		Neo\n");
				printf("87		Agente Smith\n");
				printf("Digite sua escolha: ");
				scanf("%d", &votoPrefeito);
				
				if (votoPrefeito==99) {
					qtdEleitores++;
					qtdNeo++;
				} else {
					qtdEleitores++;
					qtdAgente++;
				}
				
				
				
				printf("---Candidatos a vereador---\n");
				printf("99001		Trinity\n");
				printf("99002		Morpheus\n");
				printf("87111		Cypher\n");
				printf("87112		Agente Brown\n");
				printf("87113		Agente Jones\n");
				printf("76301		Oraculo\n");
				printf("76302		Garoto colher\n");
				printf("Digite sua escolha: ");
				scanf("%d", &votoVereador);
				
				switch(votoVereador){
					case 99001:
						qtdTrinity++;
						break;
					case 99002:
						qtdMorpheus++;
						break;
					case 87111:
						qtdCypher++;
						break;
					case 87112:
						qtdBrown++;
						break;
					case 87113:
						qtdJones++;
						break;
					case 76301:
						qtdOraculo++;
						break;
					case 76302:
						qtdGaroto++;
						break;
				}
                break;
                
			case 2:
				printf("%d eleitores votaram.\n", qtdEleitores);
				break;
				
			case 3:
				printf("O prefeito Neo recebeu %d votos.\n", qtdNeo);
				printf("O prefeito Agente Smith recebeu %d votos.\n", qtdAgente);
				break;
				
			case 4:
				printf("A vereadora Trinity recebeu %d votos.\n", qtdTrinity);
				printf("O vereador Morpheus recebeu %d votos.\n", qtdMorpheus);
				printf("O vereador Cypher recebeu %d votos.\n", qtdCypher);
				printf("O vereador Agente Brown recebeu %d votos.\n", qtdBrown);
				printf("O vereador Agente Jones recebeu %d votos.\n", qtdJones);
				printf("O vereador Oraculo recebeu %d votos.\n", qtdOraculo);
				printf("O vereador Garoto Colher recebeu %d votos.\n", qtdGaroto);
				break;
				
			case 5:
				if(qtdNeo>qtdAgente) {
					printf("O prefeito eleito foi o prefeito Neo! \n");
				}else if (qtdNeo<qtdAgente) {
					printf("O prefeito eleito foi o prefeito Agente Smith!\n");
				} else if(qtdNeo==qtdAgente) {
					printf("Empate\n");
				}
				
				if (qtdTrinity > qtdMorpheus && qtdTrinity > qtdCypher && qtdTrinity > qtdBrown && qtdTrinity > qtdJones && qtdTrinity > qtdOraculo && qtdTrinity > qtdGaroto) {
			        printf("O vereador eleito foi Trinity!\n");
			    } else if (qtdMorpheus > qtdCypher && qtdMorpheus > qtdBrown && qtdMorpheus > qtdJones && qtdMorpheus > qtdOraculo && qtdMorpheus > qtdGaroto && qtdMorpheus > qtdTrinity) {
			        printf("O vereador eleito foi Morpheus!\n");
			    } else if (qtdCypher > qtdBrown && qtdCypher > qtdJones && qtdCypher > qtdOraculo && qtdCypher > qtdGaroto  && qtdCypher > qtdMorpheus  && qtdCypher > qtdTrinity) {
			        printf("O vereador eleito foi Cypher!\n");
			    } else if (qtdBrown > qtdJones && qtdBrown > qtdOraculo && qtdBrown > qtdGaroto && qtdBrown > qtdTrinity && qtdBrown > qtdMorpheus && qtdBrown > qtdCypher) {
			        printf("O vereador eleito foi Agente Brown!\n");
			    } else if (qtdJones > qtdOraculo && qtdJones > qtdGaroto && qtdJones > qtdTrinity && qtdJones > qtdMorpheus && qtdJones > qtdCypher && qtdJones > qtdBrown) {
			        printf("O vereador eleito foi Agente Jones!\n");
			    } else if (qtdOraculo > qtdGaroto && qtdOraculo > qtdTrinity && qtdOraculo > qtdMorpheus && qtdOraculo > qtdCypher && qtdOraculo > qtdBrown && qtdOraculo > qtdJones) {
			        printf("O vereador eleito foi Oraculo!\n");
			    } else if (qtdGaroto > qtdTrinity && qtdGaroto > qtdMorpheus && qtdGaroto > qtdCypher && qtdGaroto > qtdBrown && qtdGaroto > qtdJones && qtdGaroto > qtdOraculo) {
			        printf("O vereador eleito foi Garoto Colher!\n");
			    } else {
			    	printf("Empate!");
				}
				break;
		}
	} while(escolha!=0);
	printf("Encerrando...");
}
