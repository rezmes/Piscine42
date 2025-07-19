#include <unistd.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int number;
	char buffer[3];
	ft_ft(&number);
	if(number == 42)
	{
		buffer[0] = (number / 10) + '0';
		buffer[1] = (number % 10) + '0';
		buffer[2] = ('\n');
	write(1, buffer, 3);
	return (0);
	}
	else
	{
		write(1, "Error: The number is not 42\n", 29);
	}
}
