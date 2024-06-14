#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, i;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	if (n1<n2){
		while (n1<=n2) {
			printf("%d \n", n1);
			n1++;
		}
	}else if (n2<n1) {
		while (n2<=n1) {
			printf("%d \n", n2);
			n2++;
		}
	} else {
		printf("Os numeros digitados são iguais.");
	}
	return 0;
}
