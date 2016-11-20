/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 15:22:34 by mlubisi           #+#    #+#             */
/*   Updated: 2016/08/27 15:22:35 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	size_dest;
	int	size_src;

	size_dest = ft_strlen(dst);
	size_src = ft_strlen(src);
	dst = ft_strncat(dst, src, (size - size_dest - 1));
	if (size >= (size_t)(size_dest + size_src))
		return (size_dest + size_src);
	else if (size_dest == 0)
		return (size_src);
	else
		return (size + size_src);
}
