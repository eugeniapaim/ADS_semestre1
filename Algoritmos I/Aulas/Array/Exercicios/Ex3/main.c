#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n[10];
	int i;
	int soma = 0;
	
	for(i=0; i<10;i++){
		printf("Digite um numero: ");
		scanf("%d", &n[i]);
		soma += n[i];
	}
	
	printf("A soma dos numeros digitados eh %d", soma);

	
	return 0;
}
