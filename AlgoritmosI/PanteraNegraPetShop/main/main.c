#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void sleep_ms(int milliseconds) {
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000);
#endif
}

#define MAX_CLIENTES 6
#define MAX_NOME_CLIENTE 20
#define MAX_PETS 6
#define MAX_SERVICOS 6
#define MAX_NOME_SERVICO 20
#define MAX_NOME_PET 20
#define MAX_TELEFONE 15
#define MAX_CPF_CLIENTE 14
#define MAX_ESPECIE 20
#define MAX_VALOR 20
#define MAX_SERVICOS_PRESTADOS 20
#define MAX_DATA 11

int main(int argc, char *argv[]) {
    int opcaoMenu, codigoCliente, codigoPet, clientePet[MAX_PETS] = {-1}, servicosPrestadosPet[MAX_SERVICOS_PRESTADOS] = {-1}, servicosPrestadosCodigo[MAX_SERVICOS_PRESTADOS] = {-1};
    char nome[MAX_CLIENTES][MAX_NOME_CLIENTE] = {""}, nomePet[MAX_PETS][MAX_NOME_PET] = {""}, nomeServico[MAX_SERVICOS][MAX_NOME_SERVICO] = {""};
    char telefone[MAX_CLIENTES][MAX_TELEFONE] = {""}, cpf[MAX_CLIENTES][MAX_CPF_CLIENTE] = {""}, especiePet[MAX_PETS][MAX_ESPECIE] = {""};
    char servicoNome[MAX_SERVICOS][MAX_NOME_SERVICO] = {""}, servicosPrestadosData[MAX_SERVICOS_PRESTADOS][MAX_DATA] = {""};
	float servicoValorCobranca[MAX_SERVICOS] = {0.0};
	float servicoValorCusto[MAX_SERVICOS] = {0.0};

    do {
        printf("Ola, seja bem vindo a Pantera Negra PetShop!\n");
        printf("Escolha um de nossos servicos:\n");
        printf("1- Listar clientes\n");
        printf("2- Cadastrar cliente pelo codigo\n");
        printf("3- Pesquisar cliente pelo nome\n");
        printf("4- Excluir cliente\n");
        printf("5- Listar pets\n");
        printf("6- Cadastrar pet pelo codigo\n");
        printf("7- Pesquisar pet pelo nome\n");
        printf("8- Excluir pet pelo codigo\n");
        printf("9- Listar servicos\n");
        printf("10- Cadastrar servico\n");
        printf("11- Atualizar servico\n");
        printf("12- Excluir servico pelo codigo\n");
        printf("13- Listar servico do PET\n");
        printf("14- Listar servicos do cliente\n");
        printf("15- Prestar servico\n");
        printf("16- Lucro dos servicos\n");
        printf("0- Sair\n");
        scanf("%d", &opcaoMenu);

        switch(opcaoMenu) {
            int i;
            case 1:
                printf("---- LISTA DE CLIENTES ----\n");
                printf("Codigo\tCliente\t\tTelefone\t\tCPF\n");
                int clienteEncontrado = 0;
                for (i = 0; i < MAX_CLIENTES; i++) {
                    if (nome[i][0] != '\0') {
                        printf("%d\t%s\t\t%s\t\t%s\n", i, nome[i], telefone[i], cpf[i]);
                        clienteEncontrado = 1;
                    }
                }
                if (!clienteEncontrado) {
                    printf("Nenhum cliente cadastrado!\n");
                }
                sleep(3);
                break;

            case 2:
                printf("--- CADASTRO DE CLIENTE ---\n");
                printf("Digite o codigo do cliente a ser cadastrado (0-5): ");
                scanf("%d", &codigoCliente);

                if (codigoCliente >= MAX_CLIENTES || codigoCliente < 0) {
                    printf("Codigo invalido!\n");
                } else if (nome[codigoCliente][0] != '\0') {
                    printf("Cliente ja cadastrado neste codigo!\n");
                } else {
                    printf("Digite o nome do cliente: ");
                    scanf("%s", nome[codigoCliente]);
                    printf("Digite o numero de telefone do cliente (apenas numeros): ");
                    scanf("%s", telefone[codigoCliente]);
                    printf("Digite o CPF do cliente (000.000.000-00): ");
                    scanf("%s", cpf[codigoCliente]);
                    printf("Cliente cadastrado com sucesso!\n");
                }
                sleep(3);
                break;
				
				case 3: {
				    printf("---- PESQUISAR CLIENTES ----\n");
				    char pesquisa[MAX_NOME_CLIENTE];
				    printf("Nome: ");
				    scanf("%s", pesquisa);
				    int found = 0;
				    for (i = 0; i < MAX_CLIENTES; i++) {
				        if (strcmp(pesquisa, nome[i]) == 0) {
				            printf("Cliente encontrado!\n");
				            printf("Codigo\tCliente\t\tTelefone\t\tCPF\n");
				            printf("%d\t%s\t\t%s\t\t%s\n", i, nome[i], telefone[i], cpf[i]);
				            found = 1;
				            break;
				        }
				    }
				    if (!found) {
				        printf("Cliente nao encontrado.\n");
				    }
	            sleep(3);
				break;	
		 	}
	 		
			case 4: {
				printf("---- EXCLUIR CLIENTES ----\n");
				printf("Codigo\tCliente\t\tTelefone\t\tCPF\n");
				for (i = 0; i < MAX_CLIENTES; i++) {
                    if (nome[i][0] != '\0') {
                        printf("%d\t%s\t\t%s\t\t%s\n", i, nome[i], telefone[i], cpf[i]);
                        clienteEncontrado = 1;
                    }
                }
                
				printf("Digite o codigo do cliente que deja excluir: ");
				scanf("%d", &codigoCliente);
				
				if (codigoCliente<0 || codigoCliente>=MAX_CLIENTES) {
					printf("Codigo invalido!\n");
				} else {
					nome[codigoCliente][0] = '\0';
					telefone[codigoCliente][0] = '\0';
					cpf[codigoCliente][0] = '\0';
					printf("Cliente excluido! \n");
				}
				sleep(3);
				break;
		 	}
		 	
		 	case 5:
			    printf("---- LISTA DE PETS ----\n");
			    printf("C�digo\tPet\t\tEspecie\t\tC�digo do Cliente\n");
			    int petEncontrado = 0;
			    for (i = 0; i < MAX_PETS; i++) {
			        if (nomePet[i][0] != '\0') {
			            printf("%s\t\t%s\t\t%d\n", nomePet[i], especiePet[i], clientePet[i]);
			            petEncontrado = 1;
			        }
			    }
			    if (!petEncontrado) {
			        printf("Nenhum pet cadastrado!\n");
			    }
			    sleep_ms(5000);
			    break;

			case 6:
				printf("--- CADASTRO DE PET ---\n");
			    printf("Digite o codigo do pet a ser cadastrado (0-5): ");
			    scanf("%d", &codigoPet);
			
			    if (codigoPet >= MAX_PETS || codigoPet < 0) {
			        printf("Codigo invalido!\n");
			    } else if (nomePet[codigoPet][0] != '\0') {
			        printf("Pet ja cadastrado neste codigo!\n");
			    } else {
			        printf("Digite o nome do pet: ");
			        scanf("%s", nomePet[codigoPet]);
			
			        printf("Digite a esp�cie do pet: ");
			        scanf("%s", especiePet[codigoPet]);
			
			        if (codigoPet >= MAX_CLIENTES || codigoPet < 0) {
			            printf("Codigo de cliente invalido!\n");
			            nomePet[codigoPet][0] = '\0';  // Limpa o cadastro do pet j� que o cliente � inv�lido
			        } else {
			            clientePet[codigoPet] = codigoCliente;
			            printf("Pet cadastrado com sucesso!\n");
			        }
			    }
			    sleep(3);
				break;
			
			case 7: {
				
				printf("---- PESQUISA DE PETS ----\n");
				char pesquisa[MAX_NOME_PET];
				printf("Nome: ");
				scanf("%s", pesquisa);
				int found = 0;
	            for (i = 0; i <= MAX_PETS; i++) {
	                if (strcmp(pesquisa, nomePet[i]) == 0) {
	                    printf("PET encontrado!\n");
	                    printf("PET\t\tEspecie\t\tCliente\n");
	                    printf("Codigo\tPET\tCliente\t\tTelefone\t\tCPF\n");
				        printf("%d\t%s\t%s\t\t%s\t%s\n", i, nomePet[i], nome[i], telefone[i], cpf[i]);
	                    found = 1;
	                    break;
	                }
	            }
				
	            if (!found) {
	                printf("PET nao encontrado.\n");
	            }
	            sleep(3);
				break;
			}	
				
			case 8: {
				
				printf("---EXCLUIR PET---\n");
				for (i = 0; i < MAX_PETS; i++) {
			        if (nomePet[i][0] != '\0') {
			            printf("%d\t%s\t\t%s\t\t%d\n", nomePet[i], especiePet[i], clientePet[i]);
			        }
			    }
				printf("Digite o codigo do PET que deja excluir: ");
				scanf("%d", &codigoPet);
				
				if (codigoPet<0 || codigoPet>=MAX_PETS) {
					printf("Codigo invalido!\n");
				} else {
					nomePet[codigoPet][0] = '\0';
					especiePet[codigoPet][0] = '\0';
					printf("PET excluido! \n");
				}
				sleep(3);
				break;
		 	}
		 	
		 	case 9:
			    printf("---- LISTA DE SERVI�OS ----\n");
			    printf("Codigo\tServico\t\tValor Cobranca\tValor Custo\n");
			    int servicoEncontrado = 0;
			    for (i = 0; i < MAX_SERVICOS; i++) {
			        if (servicoNome[i][0] != '\0') {
			            printf("%d\t%s\t\t%.2f\t\t%.2f\n", i, servicoNome[i], servicoValorCobranca[i], servicoValorCusto[i]);
			            servicoEncontrado = 1;
			        }
			    }
			    if (!servicoEncontrado) {
			        printf("Nenhum servico cadastrado!\n");
			    }
			    sleep(3);
			    break;
			
			case 10:
			    printf("--- CADASTRO DE SERVI�O ---\n");
			    printf("Digite o codigo do servico a ser cadastrado (0-5): ");
			    scanf("%d", &codigoCliente);
			
			    if (codigoCliente >= MAX_SERVICOS || codigoCliente < 0) {
			        printf("C�digo inv�lido!\n");
			    } else if (servicoNome[codigoCliente][0] != '\0') {
			        printf("Servi�o j� cadastrado neste c�digo!\n");
			    } else {
			        printf("Digite o nome do servi�o: ");
			        scanf("%s", servicoNome[codigoCliente]);
			        printf("Digite o valor de cobran�a do servi�o: ");
			        scanf("%f", &servicoValorCobranca[codigoCliente]);
			        printf("Digite o valor de custo do servi�o: ");
			        scanf("%f", &servicoValorCusto[codigoCliente]);
			        printf("Servi�o cadastrado com sucesso!\n");
			    }
			    sleep(3);
			    break;
			
			case 11:
			    printf("--- ATUALIZAR SERVI�O ---\n");
			    printf("Digite o codigo do servi�o a ser atualizado (0-5): ");
			    scanf("%d", &codigoCliente);
			
			    if (codigoCliente >= MAX_SERVICOS || codigoCliente < 0) {
			        printf("Codigo invalido!\n");
			    } else if (servicoNome[codigoCliente][0] == '\0') {
			        printf("Nenhum servi�o encontrado neste codigo!\n");
			    } else {
			        printf("Digite o novo nome do servi�o: ");
			        scanf("%s", servicoNome[codigoCliente]);
			        printf("Digite o novo valor de cobranca do servico: ");
			        scanf("%f", &servicoValorCobranca[codigoCliente]);
			        printf("Digite o novo valor de custo do servico: ");
			        scanf("%f", &servicoValorCusto[codigoCliente]);
			        printf("Servico atualizado com sucesso!\n");
			    }
			    sleep(3);
			    break;
			
			case 12:
			    printf("--- EXCLUIR SERVI�O ---\n");
			    printf("Digite o codigo do servico que deseja excluir: ");
			    scanf("%d", &codigoCliente);
			
			    if (codigoCliente < 0 || codigoCliente >= MAX_SERVICOS) {
			        printf("Codigo invalido!\n");
			    } else if (servicoNome[codigoCliente][0] == '\0') {
			        printf("Nenhum servi�o encontrado neste c�digo!\n");
			    } else {
			        servicoNome[codigoCliente][0] = '\0';
			        servicoValorCobranca[codigoCliente] = 0.0;
			        servicoValorCusto[codigoCliente] = 0.0;
			        printf("Servi�o excluido com sucesso!\n");
			    }
			    sleep(3);
			    break;
			
			case 13:
			    printf("---- LISTA DE SERVI�OS DO PET ----\n");
			    printf("Digite o codigo do pet (0-5): ");
			    scanf("%d", &codigoPet);
			
			    if (codigoPet < 0 || codigoPet >= MAX_PETS) {
			        printf("Codigo de pet invalido!\n");
			    } else {
			        printf("Pet: %s\n", nomePet[codigoPet]);
			        printf("PET\tServico\t\tData\n");
			        int found = 0;
			        for (i = 0; i < MAX_SERVICOS_PRESTADOS; i++) {
			            if (servicosPrestadosPet[i] == codigoPet) {
			                printf("%s\t%s\t\t%s\n",nomePet[i], servicoNome[servicosPrestadosCodigo[i]], servicosPrestadosData[i]);
			                found = 1;
			            }
			        }
			        if (!found) {
			            printf("Nenhum servi�o encontrado para este pet.\n");
			        }
			    }
			    sleep(3);
			    break;
			
			case 14:
			    printf("---- LISTA DE SERVI�OS DO CLIENTE ----\n");
			    printf("Digite o c�digo do cliente (0-5): ");
			    scanf("%d", &codigoCliente);
			
			    if (codigoCliente < 0 || codigoCliente >= MAX_CLIENTES) {
			        printf("C�digo de cliente inv�lido!\n");
			    } else {
			        printf("Cliente: %s\n", nome[codigoCliente]);
			        printf("Servi�o\t\tData\t\tPet\n");
			        int found = 0;
			        for (i = 0; i < MAX_SERVICOS_PRESTADOS; i++) {
			            if (clientePet[servicosPrestadosPet[i]] == codigoCliente) {
			                printf("%s\t\t%s\t\t%s\n", servicoNome[servicosPrestadosCodigo[i]], servicosPrestadosData[i], nomePet[servicosPrestadosPet[i]]);
			                found = 1;
			            }
			        }
			        if (!found) {
			            printf("Nenhum servi�o encontrado para este cliente.\n");
			        }
			    }
			    sleep(3);
			    break;
			
			case 15:
			    printf("--- PRESTAR SERVI�O ---\n");
			    printf("Digite o c�digo do pet (0-5): ");
			    scanf("%d", &codigoPet);
			
			    if (codigoPet >= MAX_PETS || codigoPet < 0) {
			        printf("C�digo de pet inv�lido!\n");
			    } else if (nomePet[codigoPet][0] == '\0') {
			        printf("Nenhum pet encontrado neste c�digo!\n");
			    } else {
			        printf("Digite o c�digo do servi�o (0-5): ");
			        scanf("%d", &codigoCliente);
			
			        if (codigoCliente >= MAX_SERVICOS || codigoCliente < 0) {
			            printf("C�digo de servi�o inv�lido!\n");
			        } else if (servicoNome[codigoCliente][0] == '\0') {
			            printf("Nenhum servi�o encontrado neste c�digo!\n");
			        } else {
			            int index = -1;
			            for (i = 0; i < MAX_SERVICOS_PRESTADOS; i++) {
			                if (servicosPrestadosPet[i] == -1) {
			                    index = i;
			                    break;
			                }
			            }
			
			            if (index == -1) {
			                printf("Limite de servi�os prestados atingido!\n");
			            } else {
			                printf("Digite a data do servi�o (dd/mm/aaaa): ");
			                scanf("%s", servicosPrestadosData[index]);
			                servicosPrestadosPet[index] = codigoPet;
			                servicosPrestadosCodigo[index] = codigoCliente;
			                printf("Servi�o prestado com sucesso!\n");
			            }
			        }
			    }
			    sleep(3);
			    break;
			
			case 16:
			    printf("---- LUCRO DOS SERVI�OS ----\n");
			    float totalLucro = 0.0;
			    printf("Pet\t\tServi�o\t\tData\t\tValor Cobran�a\tValor Custo\tLucro\n");
			    for (i = 0; i < MAX_SERVICOS_PRESTADOS; i++) {
			        if (servicosPrestadosPet[i] != -1) {
			            int pet = servicosPrestadosPet[i];
			            int servico = servicosPrestadosCodigo[i];
			            float lucro = servicoValorCobranca[servico] - servicoValorCusto[servico];
			            totalLucro += lucro;
			            printf("%s\t\t%s\t\t%s\t\t%.2f\t\t%.2f\t\t%.2f\n", nomePet[pet], servicoNome[servico], servicosPrestadosData[i], servicoValorCobranca[servico], servicoValorCusto[servico], lucro);
			        }
			    }
			    printf("Lucro Total: %.2f\n", totalLucro);
			    sleep(3);
			    break;
		}
		
		
	} while (opcaoMenu!= 0);
	
	
	
	
	
	
	return 0;
}
