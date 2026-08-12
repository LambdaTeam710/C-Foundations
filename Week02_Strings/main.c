#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *test_normal = "Hello World";
	char *test_empty = "";
	char *test_null = NULL;
	
	printf("\n--ft_strlen--\n\n");
	printf("1 - Testing Normal String : Hello World\n");
	printf("The length of the string is : %d\n", ft_strlen(test_normal));
	printf("2 - Testing Empty String\n");
	printf("The length of the string is : %d\n", ft_strlen(test_empty));
	// Edge Case : The function must return (0) safely to avoid Segmentation Fault 
	printf("3 - Testing NULL Pointer\n");
	printf("The Length of the string is : %d\n", ft_strlen(test_null));
       return (0);
}       

