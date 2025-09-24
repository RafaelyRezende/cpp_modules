#include <iostream>

int	main(int argc, char **argv)
{
	int 	i = 0;
	char	*ptr = NULL;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOSE *" << std::endl;
		return (0);
	}
	while (*(++argv))
	{
		ptr = *argv;
		while (*ptr)
		{
			std::cout << (char)toupper(*ptr);
			ptr++;
		}
	}
	std::cout << std::endl;
}
