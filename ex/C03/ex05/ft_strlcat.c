/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezmes                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:40:03 by rezmes    #+#    #+#             */
/*   Updated: 2025/07/25 14:40:03 by rezmes    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
  unsigned int i;
  unsigned int dest_len;

  dest_len = 0;
  while (dest[dest_len]) {
    dest_len++;
  }
  i = 0;
  while (src[i] && dest_len + i + 1 < size) {
    dest[dest_len + i] = src[i];
    i++;
  }
  if (size != 0 && size > dest_len)
    dest[dest_len + i] = '\0';
  while (src[i])
    i++;

  return (dest_len + i);
}
