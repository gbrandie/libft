#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	i;

	src_size = 0;
	i = 0;
	if (!src)
		return (0);
	while (src[src_size] != '\0')
		src_size++;
	if (size == 0)
		return (src_size);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}