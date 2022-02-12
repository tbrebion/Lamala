#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
//#include <sys/wait.h>

int	main(void)
{
	int	id;
	int	n;
	int	i;
       
	id = fork();
	if (id == 0)
		n = 1;
	else
		n = 6;
	if (id != 0)
		wait();
	i = n;
	while (i++ < n + 5)
	{
		printf("%d ", i);
		//fflush(stdout);
	}
	return (0);
}
