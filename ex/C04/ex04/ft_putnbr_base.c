/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezmes                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:05:52 by rezmes    #+#    #+#             */
/*   Updated: 2025/07/26 11:05:52 by rezmes    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_valid_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = is_valid_base(base);
	if (base_len == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	j = 0;
	while (base[j])
	{
		j++;
		i = 0;
		while (base[j] && i != j)
		{
			if (base[j] == base[i])
				return (0);
			i++;
		}
		if (base[j] == '-' || base[j] == '+')
			return (0);
	}
	if (j < 2)
		return (0);
	return (j);
}
