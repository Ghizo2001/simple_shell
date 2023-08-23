#include "shell.h"
/**
 * check_build_in_func - command line interpreter
 * @final_string: input from user
 * @envp: array of variables
 * Return: return value
 */
int check_build_in_func(char *final_string, char *envp[])
{
	char *array_buitin[] = {"cd", "exit", "env"};
	char **env = envp;
	int num_builtins = sizeof(array_buitin) / sizeof(array_buitin[0]);
	int f = 0;

	while (f < num_builtins)
	{
		if (my_strcmp(array_buitin[f], final_string) == 0)
		{
			switch (f + 1)
			{
				case 1:
					if (chdir(final_string) != 0)
					{
						perror("cd");
					}
					return (1);

				case 2:
					printf("BYE ;)");
					return (2);

				case 3:
					env = envp;
					while (*env != NULL)
					{
						printf("%s\n", *env);
						env++;
					}
					return (1);

				default:
					return (0);
			}
		}
		f++;
	}
	return (0);
}
/**
 * my_strcmp - Compare two strings.
 * @str1: First string to compare.
 * @str2: Second string to compare.
 * Return: Negative value if str1 is less than str2,
 * Positive value if str1 is greater than str2,
 * 0 if str1 is equal to str2.
 */
int my_strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
