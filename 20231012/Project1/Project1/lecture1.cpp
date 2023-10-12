#include <stdio.h>

int main(void) {

	int a = 3;
	int *prt1 = &a;

	char b =  'b';
	char *prt2 = &b;

	printf("%d\n", prt1);
	printf("%d\n", sizeof(prt1));

	printf("%d\n", prt2);
	printf("%d\n", sizeof(prt2));
	
	return 0;
}