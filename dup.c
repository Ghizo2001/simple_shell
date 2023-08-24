#include "libs.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: The string to be duplicated
 * Return: On success, returns a pointer to the duplicated string. If str is
 *         NULL or if memory allocation fails, returns NULL
*/
char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}
