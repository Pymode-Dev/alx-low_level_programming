#include "hash_tables.h"

int main(void)
{
	unsigned long int hash_t;
	char *s;

	hash_t = 1024;
	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_t));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_t));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *)s));
	printf("%lu\n", key_index((unsigned char *)s, hash_t));
	return (EXIT_SUCCESS);
}
