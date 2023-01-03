#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring. finds the first occurence of the substring
 * needle, in the string haystack. The terminating null bytes aren't compared
 *
 * @haystack: string to search
 * @needle: substring to locate in haystack
 *
 * Return: Pointer to the beginning of the located substring
 * or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0, j = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle + j))
		{
			for (k = i; *(needle + j) != '\0'; j++, k++)
			{
				if (*(haystack + k) != *(needle + j))
					break;
			}
			if (*(needle + j) == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
