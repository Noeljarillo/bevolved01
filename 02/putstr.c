#include <string.h>
#include <stdio.h>
#include <unistd.h>


void	putcharo(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		putcharo(*(str + i));
		i++;
	}
}
