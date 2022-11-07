#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h>
#include <string.h>

char	test_strmapi(unsigned int i, char c)
{
	return (c + i);
}

void	test_striteri(unsigned int i, char *s)
{
	*s += i;
}

void	del(void *elt)
{
	free(elt);
}

void	print_list(t_list *elt)
{
	t_list	*tmp;

	tmp = elt;
	while (tmp != NULL)
	{
		printf("	%s\n", (char *) (tmp->content));
		printf("	%p\n", tmp->next);
		tmp = tmp->next;
	}
	printf("\n	List printed successfully\n");
}

int	main(void)
{
	printf("Test: FT_ATOI\n");
		printf("\n");
		printf("	ft_atoi('  \\t\\n -23415')         -23415:%d\n", ft_atoi("  \t\n -23415"));
		printf("	ft_atoi('  -2147483648')    -2147483648:%d\n", ft_atoi("  -2147483648"));
		printf("	ft_atoi('    \\v2147483647')  2147483647:%d\n", ft_atoi("    \v2147483647"));
		printf("	ft_atoi('  +0hk3')                    0:%d\n", ft_atoi("  +0hk3"));
		printf("\n");

	printf("Test: FT_BZERO\n");
		printf("\n");
		int	j = 0;
		void	*arr2;
		arr2 = malloc(sizeof(void) * 5);
		((char *) arr2)[0] = 'a';
		((char* ) arr2)[1] = 'a';
		((char* ) arr2)[2] = 'a';
		((char *) arr2)[3] = 'a';
		((char *) arr2)[4] = 0;

		ft_bzero(arr2, 2);
		printf("	ft_bzero(arr2, 2) aa:");
		while (j < 5)
			printf("%c", ((char *) arr2)[j++]);
		printf("\n\n");

	printf("Test: FT_CALLOC\n");

	printf("Test: FT_ISALNUM\n");
		printf("\n");
		printf("	ft_isalnum('B') 1:%d\n", ft_isalnum('B'));
		printf("	ft_isalnum('c') 1:%d\n", ft_isalnum('c'));
		printf("	ft_isalnum('2') 1:%d\n", ft_isalnum('2'));
		printf("	ft_isalnum('!') 0:%d\n", ft_isalnum('!'));
		printf("	ft_isalnum(127) 0:%d\n", ft_isalnum(127));
		printf("\n");

	printf("Test: FT_ISALPHA\n");	
		printf("\n");
		printf("	ft_isalpha('B') 1:%d\n", ft_isalpha('B'));
		printf("	ft_isalpha('c') 1:%d\n", ft_isalpha('c'));
		printf("	ft_isalpha('2') 0:%d\n", ft_isalpha('2'));
		printf("	ft_isalpha('!') 0:%d\n", ft_isalpha('!'));
		printf("	ft_isalpha(29)  0:%d\n", ft_isalpha(29));
		printf("\n");

	printf("Test: FT_ISASCII\n");	
		printf("\n");
		printf("	ft_isascii(' ') 1:%d\n", ft_isascii(' '));
		printf("	ft_isascii('y') 1:%d\n", ft_isascii('y'));
		printf("	ft_isascii('0') 1:%d\n", ft_isascii('0'));
		printf("	ft_isascii(128) 0:%d\n", ft_isascii(128));
		printf("	ft_isascii(-3)  0:%d\n", ft_isascii(-3));
		printf("\n");

	printf("Test: FT_ISDIGIT\n");	
		printf("\n");
		printf("	ft_isdigit('B') 0:%d\n", ft_isdigit('B'));
		printf("	ft_isdigit('c') 0:%d\n", ft_isdigit('c'));
		printf("	ft_isdigit('2') 1:%d\n", ft_isdigit('2'));
		printf("	ft_isdigit('!') 0:%d\n", ft_isdigit('!'));
		printf("	ft_isdigit(127) 0:%d\n", ft_isdigit(127));
		printf("\n");


	printf("Test: FT_ISPRINT\n");	
		printf("\n");
		printf("	ft_isprint(' ')  1:%d\n", ft_isprint(' '));
		printf("	ft_isprint('y')  1:%d\n", ft_isprint('y'));
		printf("	ft_isprint('0')  1:%d\n", ft_isprint('0'));
		printf("	ft_isprint(0)    0:%d\n", ft_isprint(0));
		printf("	ft_isprint(127)  0:%d\n", ft_isprint(127));
		printf("\n");

	printf("Test: FT_ITOA\n");
		printf("\n");
		printf("	ft_itoa(0)                     0:%s\n", ft_itoa(0));
		printf("	ft_itoa(-2147483648) -2147483648:%s\n", ft_itoa(-2147483648));
		printf("	ft_itoa(2147483647)   2147483647:%s\n", ft_itoa(2147483647));
		printf("	ft_itoa(-456)               -456:%s\n", ft_itoa(-456));
		printf("\n");

	printf("Test: FT_MEMCHR\n");
		printf("\n");
		void	*memchr_test;
		memchr_test = malloc(sizeof(char) * 5);
		((unsigned char *) memchr_test)[0] = 'H';
		((unsigned char *) memchr_test)[1] = 'o';
		((unsigned char *) memchr_test)[2] = 'l';
		((unsigned char *) memchr_test)[3] = 'a';
		((unsigned char *) memchr_test)[4] = 0;
		printf("	ft_memchr('Hola', 'o', 2) ola:%s\n", (char *) ft_memchr(memchr_test, 'o', 2));
		free(memchr_test);
		printf("\n");

	printf("Test: FT_STRNCMP\n");
		printf("\n");
		char test1[] = "abcd", test2[] = "abCd", test3[] = "abcd";
		printf("	ft_strncmp('abcd', 'abCd')  32:%d\n", ft_strncmp(test1, test2, 3));
        	printf("	ft_strncmp('abcd', 'abcd')   0:%d\n", ft_strncmp(test1, test3, 3));
        	printf("	ft_strncmp('abCd', 'abcd') -32:%d\n", ft_strncmp(test2, test1, 3));
		printf("\n");

	printf("Test: FT_MEMCMP\n");
		printf("\n");
		char *array1, *array2, *array3;
		array1 = malloc(sizeof(char) * 5);
		array2 = malloc(sizeof(char) * 5);
		array3 = malloc(sizeof(char) * 5);
		array1[0] = 'a';
		array1[1] = 'b';
		array1[2] = 'c';
		array1[3] = 'd';
		array1[4] = 0;
		array2[0] = 'a';
		array2[1] = 'b';
		array2[2] = 'C';
		array2[3] = 'd';
		array2[4] = 0;
		array3[0] = 'a';
		array3[1] = 'b';
		array3[2] = 'c';
		array3[3] = 'd';
		array3[4] = 0;
		printf("	ft_strncmp('abcd', 'abCd')  32:%d\n", ft_strncmp(test1, test2, 3));
        	printf("	ft_strncmp('abcd', 'abcd')   0:%d\n", ft_strncmp(test1, test3, 3));
        	printf("	ft_strncmp('abCd', 'abcd') -32:%d\n", ft_strncmp(test2, test1, 3));
		printf("\n");

	printf("Test: FT_MEMCPY\n");
		printf("\n");
		void	*memcpy_src;
		void	*memcpy_dest;
		memcpy_src = malloc(sizeof(char) * 5);
		memcpy_dest = malloc(sizeof(char) * 5);
		
		((char *) memcpy_src)[0] = 'a';
		((char* ) memcpy_src)[1] = 'b';
		((char* ) memcpy_src)[2] = 'c';
		((char *) memcpy_src)[3] = 'd';
		((char *) memcpy_src)[4] = 0;
		((char *) memcpy_dest)[0] = 'd';
		((char* ) memcpy_dest)[1] = 'c';
		((char* ) memcpy_dest)[2] = 'b';
		((char *) memcpy_dest)[3] = 'a';
		((char *) memcpy_dest)[4] = 0;

		printf("	ft_memcpy(dest, src, 2) abba:%s\n", (char *) ft_memcpy(memcpy_dest, memcpy_src, 2));
		printf("\n");

	printf("Test: FT_MEMMOVE\n");
		printf("\n");
		void	*memmove_src;
		void	*memmove_dest;
		memmove_src = malloc(sizeof(char) * 5);
		memmove_dest = malloc(sizeof(char) * 5);
		
		((char *) memmove_src)[0] = 'a';
		((char* ) memmove_src)[1] = 'b';
		((char* ) memmove_src)[2] = 'c';
		((char *) memmove_src)[3] = 'd';
		((char *) memmove_src)[4] = 0;
		((char *) memmove_dest)[0] = 'd';
		((char* ) memmove_dest)[1] = 'c';
		((char* ) memmove_dest)[2] = 'b';
		((char *) memmove_dest)[3] = 'a';
		((char *) memmove_dest)[4] = 0;

		printf("	ft_memmove(dest, src, 2) abba:%s\n", (char *) ft_memmove(memmove_dest, memmove_src, 2));
		printf("\n");

	printf("Test: FT_MEMSET\n");
		printf("\n");
		void	*arr;
		arr = malloc(sizeof(void) * 5);
		((char *) arr)[0] = '3';
		((char* ) arr)[1] = '3';
		((char* ) arr)[2] = '3';
		((char *) arr)[3] = '3';
		((char *) arr)[4] = 0;
		printf("	ft_memset(arr, 50, 2) 2233:%s\n", (char *) ft_memset(arr, 50, 2));
		printf("\n");

	printf("Test: FT_PUTCHAR_FD\n");
		printf("\n");
		ft_putstr_fd("        ", 1);
		ft_putchar_fd('c', 1);
		ft_putchar_fd(':', 1);
		ft_putchar_fd('c', 1);
		ft_putchar_fd('\n', 1);
		printf("\n");

	printf("Test: FT_PUTENDL_FD\n");
		printf("\n");
		ft_putstr_fd("        ", 1);
		ft_putendl_fd("Hello World!", 1);
		printf("\n");

	printf("Test: FT_PUTNRB_FD\n");
		printf("\n");
		ft_putstr_fd("        ", 1);
		ft_putnbr_fd(-2147483648, 1);
		ft_putstr_fd("\n        ", 1);
		ft_putnbr_fd(2147483647, 1);
		ft_putstr_fd("\n        ", 1);
		ft_putnbr_fd(0, 1);
		ft_putstr_fd("\n        ", 1);
		ft_putnbr_fd(-214748, 1);
		printf("\n\n");

	printf("Test: FT_PUTSTR_FD\n");
		printf("\n");
		ft_putstr_fd("        ", 1);
		ft_putstr_fd("Hello World!\n", 1);
		printf("\n");

	printf("Test: FT_SPLIT\n");
		printf("\n");
		char	**split = ft_split("Bonjour à tous, comment allez-vous aujourd'hui ?", ' ');
		for (int i = 0; split[i]; i++)
			printf("	%s\n", split[i]);
		printf("\n");

	printf("Test: FT_STRCHR\n");
		printf("\n");
		printf("	ft_strchr('Hello World!', 'o') o World!:%s\n", ft_strchr("Hello World!", 'o'));
		printf("\n");

	printf("Test: FT_STRDUP\n");
		printf("\n");
		printf("	ft_strdup('Hello World') Hello World!:%s\n", ft_strdup("Hello World!"));
		printf("\n");

	printf("Test: FT_STRITERI\n");
		printf("\n");
		void	(*g)(unsigned int, char*) = &test_striteri;
		char	*s;
		s = malloc(sizeof(char) * 8);
		s[0] = 'a';
		s[1] = 'b';
		s[2] = 'c';
		s[3] = 'd';
		s[4] = 'e';
		s[5] = 'f';
		s[6] = 'g';
		ft_striteri(s, g);
		printf("	ft_striteri('abcdefg', test_striteri) acegikm:%s\n", s);
		free(s);
		printf("\n");

	printf("Test: FT_STRJOIN\n");
		printf("\n");
		printf("	ft_strjoin('Hello ', 'World!') Hello World!:%s\n", ft_strjoin("Hello ", "World!"));
		printf("\n");

	printf("Test: FT_STRLCAT\n");
		printf("\n");
		char str1[20] = "Hola";
		char str2[] = "Hello";
		printf("	ft_strlcat('Hola', 'Hello', 4) 9:%ld\n", ft_strlcat(str1, str2, 4));
		printf("\n");

	printf("Test: FT_STRLCPY\n");
		printf("\n");
		char	*strlcpy_src;
		char	*strlcpy_dest;
		strlcpy_src = malloc(sizeof(char) * 5);
		strlcpy_dest = malloc(sizeof(char) * 5);
		
		strlcpy_src[0] = 'a';
		strlcpy_src[1] = 'b';
		strlcpy_src[2] = 'c';
		strlcpy_src[3] = 'd';
		strlcpy_src[4] = 0;
		strlcpy_dest[0] = 'd';
		strlcpy_dest[1] = 'c';
		strlcpy_dest[2] = 'b';
		strlcpy_dest[3] = 'a';
		strlcpy_dest[4] = 0;

		printf("	ft_strlcpy(dest, src, 2) 4:%ld\n", ft_strlcpy(strlcpy_dest, strlcpy_src, 2));
		printf("\n");

	printf("Test: FT_STRLEN\n");
		printf("\n");
		printf("	ft_strlen('Hello World!') 12:%ld\n", ft_strlen("Hello World!"));
		printf("	ft_strlen('') 0:%ld\n", ft_strlen(""));
		printf("	ft_strlen('Ciao a tutti e congratulazioni per l'ammissione al 42!') 54:%ld\n", ft_strlen("Ciao a tutti e congratulazioni per l'ammissione al 42!"));
		printf("\n");

	printf("Test: FT_STRMAPI\n");
		printf("\n");
		char	(*f)(unsigned int, char) = &test_strmapi;
		printf("	ft_strmapi('abcdefg', test_strmapi) acegikm:%s\n", ft_strmapi("abcdefg", f));
		printf("\n");

	printf("Test: FT_STRNSTR\n");
		printf("\n");
		printf("	ft_strnstr('Hello World!', ' Wor', 10)  World!:%s\n", ft_strnstr("Hello World!", " Wor", 10));
		printf("\n");

	printf("Test: FT_STRRCHR\n");
		printf("\n");
		printf("	ft_strrchr('Hello World!', 'o') orld!:%s\n", ft_strrchr("Hello World!", 'o'));
		printf("\n");

	printf("Test: FT_STRTRIM\n");
		printf("\n");
		printf("	ft_strtrim('Hello World!', 'Hel!d')   o Wor:%s\n", ft_strtrim("Hello World!", "Hel!d"));
		printf("	ft_strtrim('Hello World!', '!d') Hello Worl:%s\n", ft_strtrim("Hello World!", "!d"));
		printf("	ft_strtrim('Hello World!', 'Hel')  o World!:%s\n", ft_strtrim("Hello World!", "Hel"));
		printf("	ft_strtrim('Hello World!', '') Hello World!:%s\n", ft_strtrim("Hello World!", ""));
		printf("\n");

	printf("Test: FT_SUBSTR\n");
		printf("\n");
		printf("	ft_substr('Hello World!', 6, 5)  World:%s\n", ft_substr("Hello World!", 6, 5));
		printf("	ft_substr('Hello World!', 6, 7) World!:%s\n", ft_substr("Hello World!", 6, 7));
		printf("	ft_substr('Hello World!', 6, 0)       :%s\n", ft_substr("Hello World!", 6, 0));
		printf("\n");

	printf("Test: FT_TOLOWER\n");
		printf("\n");
		printf("	ft_tolower('B') b:%c\n", ft_tolower('B'));
		printf("	ft_tolower('c') c:%c\n", ft_tolower('c'));
		printf("	ft_tolower('2') 2:%c\n", ft_tolower('2'));
		printf("	ft_tolower('!') !:%c\n", ft_tolower('!'));
		printf("	ft_tolower(127)  :%c\n", ft_tolower(127));
		printf("\n");

	printf("Test: FT_TOUPPER\n");
		printf("\n");
		printf("	ft_toupper('B') B:%c\n", ft_toupper('B'));
		printf("	ft_toupper('c') C:%c\n", ft_toupper('c'));
		printf("	ft_toupper('2') 2:%c\n", ft_toupper('2'));
		printf("	ft_toupper('!') !:%c\n", ft_toupper('!'));
		printf("	ft_toupper(127)  :%c\n", ft_toupper(127));
		printf("\n");

	printf("Test: FT_LSTNEW\n");
		printf("\n");
		void	*content = malloc(sizeof(char) * 2);
		printf("%p\n", content);
		((char *)content)[0] = 'a';
		((char *)content)[1] = '\0';
		printf("%p\n", content);
		t_list	*lstnew_test = ft_lstnew(content);
		print_list(lstnew_test);
		printf("\n");

	printf("Test: FT_LSTADD_FRONT\n");
		printf("\n");
		void	*content1 = malloc(sizeof(char) * 6);
		((char *)content1)[0] = 'S';
		((char *)content1)[1] = 'a';
		((char *)content1)[2] = 'l';
		((char *)content1)[3] = 'u';
		((char *)content1)[4] = 't';
		((char *)content1)[5] = '\0';
		t_list	*lstnew_test1 = ft_lstnew(content1);
		ft_lstadd_front(&lstnew_test, lstnew_test1);
		print_list(lstnew_test1);
		printf("\n");

	printf("Test: FT_LSTSIZE\n");
		printf("\n");
		printf("	ft_lstsize(liste test) 2:%d\n", ft_lstsize(lstnew_test1));
		printf("\n");

	printf("Test: FT_LSTLAST\n");
		printf("\n");
		printf("	ft_lstlast(liste test) Salut:%s\n", (char *) ft_lstlast(lstnew_test1)->content); 
		printf("\n");

	printf("Test: FT_LSTADD_BACK\n");
		printf("\n");
		void	*content2 = malloc(sizeof(char) * 5);
		((char *)content2)[0] = 'S';
		((char *)content2)[1] = 'a';
		((char *)content2)[2] = 'l';
		((char *)content2)[3] = 'u';
		((char *)content2)[4] = '\0';
		t_list	*lstnew_test2 = ft_lstnew(content2);
		ft_lstadd_back(&lstnew_test1, lstnew_test2);
		print_list(lstnew_test1);
		printf("\n");


	printf("Test: FT_LSTITER\n");

	printf("Test: FT_LSTMAP\n");
	
	printf("Test: FT_LSTDELONE\n");
		printf("\n");
		ft_lstdelone(lstnew_test1->next, &free);
		printf("\n");

	printf("Test: FT_LSTCLEAR\n");
}
