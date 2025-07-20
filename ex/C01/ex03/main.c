#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;

	int	b;

//	int	*divnum;

//	int	*modnum;

	int	div_result;

	int	mod_result;

	a = 37;
	b = 5;
//	*div = 0;
//	*mod = 0;
//	divnum = *div;
//	modnum = *mod;

	ft_div_mod(a,	b, &div_result, &mod_result);

	char	buff[3];

	buff[0] = div_result + '0';
	buff[1] = mod_result + '0';
	buff[2] = '\0';

	write(1, "Quetien buff, 3);
	write(1, "\n", 1);
	
	return (0);
}
