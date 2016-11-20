/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 14:15:28 by mlubisi           #+#    #+#             */
/*   Updated: 2016/11/20 17:03:27 by mlubisi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_line(int const fd, char **data_)
{
	int		val_;
	char	*sub_;
	char	*tmp_;

	if (!(sub_ = (char *)malloc(sizeof(*sub_) * (BUFF_SIZE + 1))))
		return (-1);
	val_ = read(fd, sub_, BUFF_SIZE);
	if (val_ > 0)
	{
		sub_[val_] = '\0';
		tmp_ = ft_strjoin(*data_, sub_);
		free(*data_);
		*data_ = tmp_;
	}
	free(sub_);
	return (val_);
}

int			get_next_line(const int fd, char **line)
{
	int			val_;
	char		*buff_;
	static char	*data_ = NULL;

	if ((!data_ && (data_ = (char *)malloc(sizeof(*data_))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	buff_ = ft_strchr(data_, '\n');
	while (buff_ == NULL)
	{
		val_ = ft_read_line(fd, &data_);
		if (val_ == 0)
		{
			if (ft_strlen(data_) == 0)
				return (0);
			data_ = ft_strjoin(data_, "\n");
		}
		if (val_ < 0)
			return (-1);
		else
			buff_ = ft_strchr(data_, '\n');
	}
	*line = ft_strsub(data_, 0, ft_strlen(data_) - ft_strlen(buff_));
	data_ = ft_strdup(buff_ + 1);
	return (1);
}
