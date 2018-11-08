#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=365;
	int *ptr=&i;
	
	printf("i address :%u\n",&i);
	printf("i value :%u\n", i);
	
	printf("ptr address :%u\n",ptr);
	printf("ptr value :%u\n", *ptr);
	
	return 0;
}
