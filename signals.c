#include "libs.h"
/**
 * sigint_handler - function that handles SIGINT signal
 * @sig: signal number
 * Return: void
 */
void sigint_handler(int __attribute__((unused)) sig)
{
	write(1, "\n", 1);
	prompt();
	fflush(stdout);
}
/**
 * sigquit_handler - function that handles SIGQUIT signal
 * @sig: signal number
 * Return: void
 */
void sigquit_handler(int __attribute__((unused)) sig)
{
	write(1, "\n", 1);
	exit(0);
}
