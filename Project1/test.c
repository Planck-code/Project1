#include<stdio.h>

void test(int *x) {
	*x = 1024;
	printf("in_x = %d\n",*x);
}

int main() {
	int x = 1;
	printf("first_x = %d\n", x);
	test(&x);
	printf("out_x = %d\n",x);
	printf("demo");
	
	return 0;
}