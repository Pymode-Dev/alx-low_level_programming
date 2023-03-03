#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Write your line code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anythinh else than this line of code
	 */
	*(p + 5) = 98;
	printf("The address of p is %p\n", &p);
	printf("The address of a is %p\n", &a);
	printf("The address of n is %p\n", &n);
	printf("The value of a=%p, n = %d, p = %d\n", a, n, *p);
	printf("a[2] = %d\n", a[2]);
	return (0);
}
