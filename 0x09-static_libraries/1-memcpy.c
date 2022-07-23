#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: a pointer to the start of the target area
 * @src: a pointer to the start of the source area
 * @n: the number of byts to copy
 *
 * Description: This function copies n bytes from memory area src to memory
 * area dest. The memory are must not overlap.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; ++src)
		dst[i] = *src;
	return (dest);
}
