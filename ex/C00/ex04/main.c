#include <unistd.h>

void	ft_is_negative(int c);

int	main(void)
{
	ft_is_negative(8);
	ft_is_negative(0);
	ft_is_negative(-2);	
	char b;

	b = '\n';

	write(1, &b, 1);
}
