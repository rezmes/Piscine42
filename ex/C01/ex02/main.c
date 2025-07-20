#include <unistd.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int m = 2;

	int n = 3;

	char buff[3];

        buff[0] = m + '0';
        buff[1] = n + '0';
        buff[2] = '\0';

        write(1, buff,3);
	write(1, "\n", 1);

	ft_swap(&m, &n);

	buff[0] =m + '0';
	buff[1] = n + '0';
	buff[2] = '\0';

	write(1, buff,3); 
	write(1, "\n", 1);

	return (0);
}
