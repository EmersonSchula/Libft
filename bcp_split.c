#include "libft.h"

static int bcp_split(char const *src, char *dest, char c, int ind)
{
	size_t	i;
	size_t	j;
	size_t	start;
	
	i = ind;
	j = 0;
	while (src[i] == c)
		i++;
	if (src[i] != '\0')
	{
		start = i;
		while (src[i] && src[i] != c)
			i++;
		dest[j] = word_dup(src, start, i);
		if (!dest[j])
		{
			free_split(dest, j);
			return (NULL);
		}
		j++;
	}
	dest[j] = NULL;
	return (i);
}
