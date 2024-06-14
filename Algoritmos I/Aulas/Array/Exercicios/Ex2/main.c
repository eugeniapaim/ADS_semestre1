#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n[4];
	int soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n[0]);
	printf("Digite outro numero: ");
	scanf("%d", &n[1]);
	printf("Digite um numero: ");
	scanf("%d", &n[2]);	
	n[3] = n[0] + n[1] + n[2];
	
	printf("A soma dos numeros digitados eh %d", n[3]);
	
	return 0;
}
