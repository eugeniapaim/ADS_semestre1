#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if(n>0){
		for(i=2; i<=n; i+=2){
			printf("%d \n", i);
		}
	} else {
		for(i=-2; i>=n; i-=2){
			printf("%d \n", i);
		}
	}
		
	return 0;
}
