#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	//ft_strlen
	char *test_normal = "Hello World";
	char *test_empty = "";
	char *test_null = NULL;
	//ft_strcpy
	char *src = "Hello World";
	char dest[20];
	//ft_strcmp
	char *s1 = "Hello!";
	char *s2 = "Help!";
	
	printf("\n--ft_strlen--\n\n");
	printf("1 - Testing Normal String : Hello World\n");
	printf("The length of the string is : %d\n", ft_strlen(test_normal));
	printf("2 - Testing Empty String\n");
	printf("The length of the string is : %d\n", ft_strlen(test_empty));
	// Edge Case : The function must return (0) safely to avoid Segmentation Fault 
	printf("3 - Testing NULL Pointer\n");
	printf("The Length of the string is : %d\n", ft_strlen(test_null));
	printf("\n--ft_strcpy--\n\n");
	ft_strcpy(dest, src);
	printf("The Source String is : %s\n", src);
	printf("The Destination String is : %s\n", dest);
	printf("\n--ft_strcmp--\n\n");
	printf("The String Comparison Result Between Two Strings is : %d\n", ft_strcmp(s1, s2)); 

       return (0);
}       

