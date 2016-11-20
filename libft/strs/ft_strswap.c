/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 15:37:25 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/14 16:34:28 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strswap(char *str, char p, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == p)
			str[i] = c;
		i++;
	}
}