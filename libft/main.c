#include "libft.h"
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

int	main (void)
{	
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

	printf("\n%s\n", ft_strnstr(haystack, needle, 0));
}