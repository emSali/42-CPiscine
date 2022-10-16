#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int main(void)
{
	char **res;
	char *str;
	char *charset;
	int i;

	str = "      ";
	charset = "		";

	res = ft_split(str, charset);
	i = 0;
	while(i < 1)
	{
		printf("%s", res[i]);
		printf("\n");
		i++;
	}
}
		