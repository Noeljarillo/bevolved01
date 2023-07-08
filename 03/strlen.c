#include <string.h>
#include <stdio.h>

int	strleno(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
