#include <stdio.h>

#define NUM_USERS 3

typedef	struct s_user
{
	char	*name;
	int	age;
	int	id;
} t_user;

int	main(void)
{
	int	i;
	t_user user[NUM_USERS] = {
		{"Osama", 23, 11212},
		{"Mohammed", 19, 11213},
		{"Ahmed", 20, 11214}
	};

	i = 0;
	while (i < NUM_USERS)
	{
		printf("User%d Infos : Name : %s - Age : %d - ID : %d\n", i + 1, user[i].name, user[i].age, user[i].id);
		i++;
	}

	return (0);
}
