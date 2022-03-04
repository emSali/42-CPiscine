/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:35:38 by esali             #+#    #+#             */
/*   Updated: 2022/03/04 19:21:40 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

int	main (void)
{	
	//char str[15] = "   --012c34bbb";
	//const char str3[8] = "im";

	// char *s1 = "Hello";
	// char *s2 = "";
	
	// // int nr1 = 0;
	// // int nr2 = 65;
	// // int nr3 = 122;
	// // int nr4 = 48;
	// // int nr5 = 12344;

	// // printf("ISALPHA\n TEST 1:\nright answer: %i\n", isalnum(nr1));
	// // printf("other answer: %i\n", ft_isalnum(nr1) );

	// // printf("TEST 2:\nright answer: %i\n", isalnum(nr2));
	// // printf("other answer: %i\n\n", ft_isalnum(nr2));

	// // printf("TEST 3:\nright answer: %i\n", isalnum(nr3));
	// // printf("other answer: %i\n", ft_isalnum(nr3));

	// // printf("TEST 4:\nright answer: %i\n", isalnum(nr4));
	// // printf("other answer: %i\n", ft_isalnum(nr4));

	// // printf("TEST 5:\nright answer: %i\n", isalnum(nr5));
	// // printf("other answer: %i\n",ft_isalnum(nr5));

	// printf("TEST 1:\nright answer: %lu\n", strlen(s1));
	// printf("my answer: %lu\n", ft_strlen(s1));

	// printf("TEST 2:\nright answer: %lu\n", strlen(s2));
	// printf("my answer: %lu\n", ft_strlen(s2));

	// printf("TEST1:\nstr1 before: %s\n", str1);
	// memset(str1 + 3, '.', 9 * sizeof(char));
	// printf("after memset: %s\n", str1);
	// printf("str2 before: %s\n", str2);
	// ft_memset(str2 + 3, '.', 9 * sizeof(char));
	// printf("after ft_memset: %s\n", str2);

	// printf("TEST1:\nstr1 before: %s\n", str1);
	// memcpy(str1 + 3, str3, 15 * sizeof(char));
	// printf("after memcpy: %s\n", str1);
	// printf("str2 before: %s\n", str2);
	// ft_memcpy(str2 + 3, str3, 15 * sizeof(char));
	// printf("after ft_memcpy: %s\n\n", str2);

	// strcpy(str1, "hey, how are you?");
	// strcpy(str2, "hey, how are you?");

	// printf("TEST2:\nstr1 before: %s\n", s1);
	// memmove(s1 + 3, s3, 17 * sizeof(char));
	// printf("after memmove: %s\n", s1);
	// printf("str2 before: %s\n", s2);
	// ft_memmove(s2 + 3, s3, 17 * sizeof(char));
	// printf("after ft_memmove: %s\n", s2);	

// 	printf("TEST1:\nstr1 before: %s\n", str1);
// 	strlcat(str1 + 3, str3, 24* sizeof(char));
// 	printf("after strlcpy: %s\n", str1);
// 	printf("str2 before: %s\n", str2);
// 	ft_strlcat(str2 + 3, str3, 24 * sizeof(char));
// 	printf("after ft_strlcpy: %s\n", str2);

	// printf("strrchr: %s\n", memchr(str1, ',', 15));
	// printf("ft_strrchr: %s\n", ft_memchr(str2, ',', 15));

	// printf("strncmp: %i\n", strncmp(str1 + 5, str3, 3));
	// printf("ft_strncmp: %i\n", ft_strncmp(str1 + 5, str3, 3));

	// printf("strnstr: %s\n", strnstr(str1, str3, 2));
	// printf("ft_strnstr: %s\n", ft_strnstr(str1, str3, 2));

// 	printf("atoi: %i\n", atoi(str));
// 	printf("ft_atoi: %i\n", ft_atoi(str));

	// printf("strdup: %s\n", strdup(s1));
	// printf("s1 adress: %p\n", strdup(s1));
	// printf("strdup adress: %p\n\n", strdup(s1));
	// printf("ft_strdup: %s\n", ft_strdup(s2));
	// printf("s2 adress: %p\n", ft_strdup(s2));
	// printf("ft_strdup adress: %p\n\n", ft_strdup(s2));

	//char s1[30] = "hey, how are you?";
	//char s2[30] = "hey, how are you?";
	//char s3[30] = "hey";

	//printf("\n____\nstrjoin: %s\n", ft_strjoin(s1, s3));
	//printf("substr: %s\n", ft_substr(s1, 1, 3));
	//printf("strtrim: %s\n", ft_strtrim(s1, s3));

	// char *s4 = "hhh";
	// char **split = ft_split(s4, 'h');
	// int i = 0;
	// while (split[i] != NULL)
	// {
	// 	printf("%s\n", split[i]);
	// 	i++;
	// }

	/*  --  FT_ITOA  --  */
	printf("\nft_itoa: %s\n\n", ft_itoa(12));

	/*  --  FT_STRMAPI --  */

	/*  --  FT_PUTSTR-FD --  */
	ft_putstr_fd("FT_PUTSTR: Hallo\n", 1);
	ft_putendl_fd("PUTENDL: Hallo\n", 1);
	printf("FT_PUTNBR: ");
	ft_putnbr_fd(12, 1);
	printf("\n");
}
