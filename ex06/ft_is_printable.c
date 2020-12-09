#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int i;
	char c;

	while (str[i] != '\0')
	{
		c = str[i] - '0';
		write(1, &c, 1);
		if (c >= 0 && c <= 31)
		{
			return (0);
		}
		i++;	
	}	
	return (1);
}	


int main(void)
{
	char str[] = "sadafeAS";
	char *ptr = str;

	int i =	ft_str_is_printable(ptr);
	write(1, &i, 1);
}	
