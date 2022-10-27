#include "main.h"

/**
 * roti13- Encodes a string using roti13
 * @str - The string to be encoded
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	int indx1 = 0; indx2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
				
