#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int i=0;
	printf("--- TABUADA --- \n");
	printf("Digite um numero: \n");
	scanf("%d", &n);	
	while(i<11){
		printf("%d x %d \n",n, i);
		i++;
	}
	return 0;
}
