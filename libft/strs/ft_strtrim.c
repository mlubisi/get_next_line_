/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 16:52:41 by mlubisi           #+#    #+#             */
/*   Updated: 2016/05/19 16:54:56 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trimlen(char *s)
{
	size_t	i;
	size_t	j;
	size_t	spc;

	j = ft_strlen(s);
	i = 0;
	while (ft_isspace(s[i]) == 1)
		i++;
	spc = i;
	if (s[i] != '\0')
	{
		i = j - 1;
		while (ft_isspace(s[i]) == 1)
		{
			i--;
			spc++;
		}
	}
	return (j - spc);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	trim_len;

	i = 0;
	j = 0;
	trim_len = ft_trimlen((char *)s);
	str = (char *)malloc(sizeof(*str) * (trim_len + 1));
	if (str == NULL)
		return (NULL);
	while (ft_isspace(s[i]) == 1)
		i++;
	while (j < trim_len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
