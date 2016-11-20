/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:50:13 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/14 16:36:48 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = (char *)malloc(sizeof(*dst) * (ft_strlen(src) + 1));
	if (dst == NULL)
		return (NULL);
	return (ft_strcpy(dst, src));
}
