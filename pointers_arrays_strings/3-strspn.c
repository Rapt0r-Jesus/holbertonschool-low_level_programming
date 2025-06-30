#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;

	for (i = 0; (s[i]); i++)
	{
		found = 0;
		for (j = 0; (accept[j]); j++)
		{
			if ((s[i]) == (accept[j]))
			{
				found = 1;
				break;
			}
		}
		if (found  == 0)
			break;
	}
return (i);
}
