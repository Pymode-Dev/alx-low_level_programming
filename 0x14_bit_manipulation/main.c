#include "main.h"

int main(void)
{
	unsigned int n;

	n = binary_to_unit("1");
	printf("%u\n", n);
	n = binary_to_unit("101");
	printf("%u\n", n);
	n = binary_to_unit("1e01");
	printf("%u\n", n);
	n = binary_to_unit("1100010");
	printf("%u\n", n);
	n = binary_to_unit("0000000000000000000110010010");
	printf("%u\n", n);

	return (0);
}
