/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:46:09 by mlubisi           #+#    #+#             */
/*   Updated: 2016/08/07 17:46:10 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*tmpd;
	const char	*tmps;

	if (!dst || !src)
		return (NULL);
	tmpd = dst;
	tmps = src;
	while (n--)
	{
		*tmpd++ = *tmps;
		if (*tmps == c)
			return (tmpd);
		tmps++;
	}
	return (0);
}
