#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - fdfdfdfd
 * Return: 0
 */
 
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}




/**
 * main - ggggggggggggggggg
 * Return: 0
 */
 
int main(void)
{
	char xg = 0;
	pid_t fffffff;
	
	while (xg < 5)
	{
		fffffff = fork();
		if (fffffff > 0)
		{
			printf("Zombie process created, PID: %d\n", fffffff);
			sleep(1);
			xg++;
		}
		else
			exit(0);
	}
	infinite_while();
	return (EXIT_SUCCESS);
}

