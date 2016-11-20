/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:35:20 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/14 16:42:38 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length;

	if (!s1 || !s2)
		return (NULL);
	length = (ft_strlen((char*)s1) + ft_strlen((char*)s2));
	str = (char *)malloc(sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	str = ft_strcpy(str, (char *)s1);
	str = ft_strcat(str, (char *)s2);
	return (str);
}
