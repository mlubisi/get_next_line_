/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:46:19 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/14 15:13:58 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)src;
	while (n--)
	{
		if (*tmp == c)
			return (tmp);
		if (n)
			tmp++;
	}
	return (NULL);
}
