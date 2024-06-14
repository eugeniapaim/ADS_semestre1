#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[4] = {40, 33, 3, 6};
	int i;
	int soma = array[0] + array[1];
	int sub = array[0] - array[2];
	int mult = array[1]*array[3];
	int div = array[3]/array[2];
	
	printf("%d \n", soma);
	printf("%d \n", sub);
	printf("%d \n", mult);
	printf("%d \n", div);
	
	return 0;
}
