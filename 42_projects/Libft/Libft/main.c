#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


void test_memcpy(void *dest, const void *src, size_t n) {
    // Using ft_memcpy
    ft_memcpy(dest, src, n);
    printf("ft_memcpy result: %s\n", (char *)dest);

    // Reset destination memory and use original memcpy
    memset(dest, 0, n);
    memcpy(dest, src, n);
    printf("original memcpy result: %s\n\n", (char *)dest);
}

int main(void)
{


// Test Case 1: Normal Case
    char src1[] = "Hello, World!";
    char dest1[50] = {0};
    printf("Test Case 1 - Normal Copy\n");
    test_memcpy(dest1, src1, strlen(src1) + 1);  // Including the null terminator

    // Test Case 2: Empty Source
    char src2[] = "";
    char dest2[50] = {0};
    printf("Test Case 2 - Empty Source\n");
    test_memcpy(dest2, src2, strlen(src2) + 1);  // Including the null terminator

    // Test Case 3: Copy part of the source
    char src3[] = "Copy me partially!";
    char dest3[50] = {0};
    printf("Test Case 3 - Partial Copy\n");
    test_memcpy(dest3, src3, 9);  // Copying only "Copy me "

    // Test Case 4: Overlapping memory
    // Demonstrating how ft_memcpy behaves with overlapping memory regions
    char src4[] = "Overlap test!";
    char *dest4_ft = src4 + 5;  // Overlapping by pointing inside the source
    printf("Test Case 4 - Overlapping Memory with ft_memcpy\n");
    ft_memcpy(dest4_ft, src4, 7);
    printf("ft_memcpy result (undefined behavior): %s\n", src4);
    
    // Reset src4 for standard memcpy test
    strcpy(src4, "Overlap test!");
    char *dest4_std = src4 + 5;
    printf("Test Case 4 - Overlapping Memory with standard memcpy\n");
    memcpy(dest4_std, src4, 7);
    printf("memcpy result (undefined behavior): %s\n\n", src4);

    // Test Case 5: Large Buffer
    char src5[] = "Large Buffer Copy";
    char dest5[1000] = {0};
    printf("Test Case 5 - Large Buffer\n");
    test_memcpy(dest5, src5, strlen(src5) + 1);

    // Test Case 6: Null Source or Destination (should handle gracefully)
    printf("Test Case 6 - Null Source or Destination\n");
    char *null_src = NULL;
    char *null_dest = NULL;
    test_memcpy(null_dest,null_src, 0);  // Including the null terminator










/*	char	*c;
	int	replace_to;
	size_t	replace_len;

	c = malloc(100 * sizeof(char));
	printf("Please enter the string:  ");
	scanf("%s", c);
	printf("Please enter the replace to:  ");
	scanf("%d", &replace_to);
	printf("Please enter the replace length:  ");
	scanf("%zu", &replace_len);
	ft_memset(c, replace_to, replace_len);
	printf("My memset result: %s\n\n" , c);


	printf("Please enter the string:  ");
	scanf("%s", c);
	printf("Please enter the replace to:  ");
	scanf("%d", &replace_to);
	printf("Please enter the replace length:  ");
	scanf("%zu", &replace_len);
	memset(c, replace_to, replace_len);
	printf("CCtype memset result: %s\n\n", c);

*/





	/*printf("My ft result: %zu\n\n" ,ft_strlen(c));
	printf("CCtype result: %zu\n\n" ,ft_strlen(c));*/
	//if (ft_isdigit(c))
	//if (ft_isdigit(c))
	//if (ft_isalnum(c))
	//if (ft_isprint(c))
	//printf("%d\n", isalpha(c));
	//printf("my : %d\n", ft_isalpha(c));
	/*if (ft_isascii(c))
		printf("Ascci success.\n");
	else
		printf("Ascci failed\n\n");
	if (isascii(c))
		printf("cctype Ascci success.\n");
	else
		printf("cctype Ascci failed\n\n");
		*/
	return (0);
}
