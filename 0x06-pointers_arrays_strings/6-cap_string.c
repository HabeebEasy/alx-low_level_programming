#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @p: function string.
 * Return: the pointer to dest.
 */

char *cap_string(char *p)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(p + count) >= 97 && *(p + count) <= 122)
		*(p + count) = *(p + count) - 32;
	count++;
	while (*(p + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(p + count) == sep_words[i])
			{
				if ((*(p + (count + 1)) >= 97) && (*(p + (count + 1)) <= 122))
					*(p + (count + 1)) = *(p + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (p);
}
