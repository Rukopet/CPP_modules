#include <iostream>

int			ft_strlen(const char *str)
{
	int len;
	for (len = 0; str[len] != 0; len++);
	return (len);
}

int				main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		int len;
		char tmp;
		for (int i = 1; argc > i; i++)
		{
			len = ft_strlen(argv[i]);
			for (int j = 0; j < len; j++)
			{
				tmp = (argv[i][j] >= 97 && argv[i][j] <= 122) ? argv[i][j] - 32 :\
					argv[i][j];
				std::cout << tmp;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}