/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezmes                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:18:44 by rezmes    #+#    #+#             */
/*   Updated: 2025/07/24 17:18:44 by rezmes    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	compresult;
	int 	i;

	i = 0;
	compresult = 0;
	while ((s1[i] || s2[i]) && compresult == 0)
	{
		if (s1[i] == '\0')
		{
			compresult = -1; //I assume if s1 reach to null first, it should be minus
			return (compresult);
		}
		if (s2[i] == '\0')
		{
			compresult = 1;
			return (compresult);
		}
		compresult = s1[i] - s2[i];
		i++;
	}
	return (compresult);
}
