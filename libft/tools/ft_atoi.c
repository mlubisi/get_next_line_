/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 14:45:37 by mlubisi           #+#    #+#             */
/*   Updated: 2016/08/07 17:52:37 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		res;
	char	*tmp;

	res = 0;
	tmp = (char *)str;
	while (ft_isspace(*tmp))
		tmp++;
	sign = (*tmp == '-') ? -1 : 1;
	tmp = (*tmp == '+' || *tmp == '-') ? tmp + 1 : tmp;
	while (ft_isdigit(*tmp))
	{
		res = res * 10 + *tmp - 48;
		tmp++;
	}
	res *= sign;
	return (res);
}
