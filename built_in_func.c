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
					chdir(final_string);
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
