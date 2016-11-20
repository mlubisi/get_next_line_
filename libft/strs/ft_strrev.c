/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:29:20 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/14 15:29:26 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cswap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char		*ft_strrev(char *str)
{
	int length;
	int start;
	int end;

	start = 0;
	length = ft_strlen(str);
	end = length - 1;
	while (start < end)
	{
		ft_cswap(&str[start], &str[end]);
		start++;
		end--;
	}
	return (str);
}
