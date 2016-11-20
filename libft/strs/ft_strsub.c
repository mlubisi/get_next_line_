/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 17:30:46 by mlubisi           #+#    #+#             */
/*   Updated: 2016/05/19 17:31:08 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t n)
{
	char	*str;
	size_t	c;

	str = (char *)malloc(sizeof(*str) * (n + 1));
	if (str == NULL)
		return (NULL);
	c = 0;
	while (c < n)
	{
		str[c] = s[start + c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
