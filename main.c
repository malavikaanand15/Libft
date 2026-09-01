#define _DEFAULT_SOURCE
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bsd/string.h> // Include BSD string utilities if on Linux

void	test_is_functions(void)
{
	printf("=== 1. Character Tests & Conversions ===\n");
	printf("ft_isalpha('a'): %d | std: %d\n", ft_isalpha('a'), isalpha('a') != 0);
	printf("ft_isalpha('1'): %d | std: %d\n", ft_isalpha('1'), isalpha('1') != 0);
	printf("ft_isdigit('5'): %d | std: %d\n", ft_isdigit('5'), isdigit('5') != 0);
	printf("ft_isalnum('Z'): %d | std: %d\n", ft_isalnum('Z'), isalnum('Z') != 0);
	printf("ft_isascii(128): %d | std: %d\n", ft_isascii(128), isascii(128) != 0);
	printf("ft_isprint(31): %d | std: %d\n", ft_isprint(31), isprint(31) != 0);
	printf("ft_toupper('g'): %c | std: %c\n", ft_toupper('g'), toupper('g'));
	printf("ft_tolower('G'): %c | std: %c\n\n", ft_tolower('G'), tolower('G'));
}

void	test_memory_functions(void)
{
	char	buf1[20] = "Hello World!";
	char	buf2[20] = "Hello World!";
	char	overlap[] = "123456789";

	printf("=== 2. Memory Functions ===\n");
	
	/* memset */
	ft_memset(buf1, 'A', 5);
	memset(buf2, 'A', 5);
	printf("ft_memset: %s | std: %s\n", buf1, buf2);

	/* bzero */
	ft_bzero(buf1, 3);
	bzero(buf2, 3);
	printf("ft_bzero check: %d | std: %d\n", buf1[0], buf2[0]);

	/* memcpy & memmove (overlap test) */
	ft_memmove(overlap + 2, overlap, 5);
	printf("ft_memmove overlap: %s (Expected: 121234589)\n", overlap);

	/* NULL safety check */
	printf("ft_memcpy(NULL, NULL, 5): %p (Expected: (nil) or 0x0)\n", ft_memcpy(NULL, NULL, 5));
	printf("ft_memmove(NULL, NULL, 5): %p (Expected: (nil) or 0x0)\n\n", ft_memmove(NULL, NULL, 5));
}

void	test_string_functions(void)
{
	char	dst1[20] = "Hello ";
	char	dst2[20] = "Hello ";
	char	empty_dst[5] = "";
	
	printf("=== 3. String Manipulation & Search ===\n");
	printf("ft_strlen('42'): %zu | std: %zu\n", ft_strlen("42"), strlen("42"));

	/* strlcpy zero size check */
	printf("ft_strlcpy(dst, 'test', 0): %zu (ret should be 4)\n", ft_strlcpy(empty_dst, "test", 0));

	/* strlcat */
	ft_strlcat(dst1, "World!", 20);
	strlcat(dst2, "World!", 20);
	printf("ft_strlcat: %s | std: %s\n", dst1, dst2);

	/* strchr & strrchr with '\\0' search */
	printf("ft_strchr('\\0'): %s | std: %s\n", ft_strchr("abc", '\0'), strchr("abc", '\0'));
	printf("ft_strrchr('b'): %s | std: %s\n", ft_strrchr("abcb", 'b'), strrchr("abcb", 'b'));

	/* strncmp unsigned char test */
	printf("ft_strncmp('\\200', '\\0', 1): %d (should be > 0)\n", ft_strncmp("\200", "\0", 1));

	/* strnstr */
	printf("ft_strnstr: %s\n\n", ft_strnstr("Foo Bar Baz", "Bar", 8));
}

void	test_malloc_atoi_functions(void)
{
	char	*dup;
	void	*zero_alloc;

	printf("=== 4. atoi, calloc & strdup ===\n");
	printf("ft_atoi('   -42marvin123'): %d | std: %d\n", ft_atoi("   -42marvin123"), atoi("   -42marvin123"));
	printf("ft_atoi('+2147483647'): %d\n", ft_atoi("+2147483647"));

	/* calloc zero size handling */
	zero_alloc = ft_calloc(0, 0);
	printf("ft_calloc(0,0) ptr: %p (Must be non-null and freeable)\n", zero_alloc);
	free(zero_alloc);

	/* strdup */
	dup = ft_strdup("Libft Test");
	printf("ft_strdup: %s\n", dup);
	free(dup);
	printf("\n");
}

int	main(void)
{
	test_is_functions();
	test_memory_functions();
	test_string_functions();
	test_malloc_atoi_functions();
	return (0);
}