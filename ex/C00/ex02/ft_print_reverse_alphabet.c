/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+         +:+     */
/*   By: rezm <rezm@mail.com>          +#+  +:+       +#+        */
/*                                                */
/*   Created: 2025/07/17 16:45:58 by rezm        #+#    #+#             */
/*   Updated: 2025/07/17 16:45:58 by rezm       ###   .fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}
