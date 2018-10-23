/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:11:18 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/22 03:17:10 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_line(int fd, char **gline)
{
	char	*buff;
	char	*str;
	int		ret;

	buff = ft_strnew(sizeof(char) * BUFF_SIZE + 1);
	if (!buff)
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin(*gline, buff);
		if (!str)
			return (-1);
		free(*gline);
		*gline = str;
	}
	free(buff);
	return (ret);
}

static	int		fill(int fd, char **line, char **buffer, char *tmp)
{
	*line = ft_strsub(buffer[fd], 0, ft_strlen(buffer[fd]) - ft_strlen(tmp));
	tmp = ft_strdup(tmp + 1);
	free(buffer[fd]);
	buffer[fd] = tmp;
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*buffer[FD_MAX];
	char			*tmp;
	int				len;

	if (fd < 0 || fd > FD_MAX || line == NULL)
		return (-1);
	if (buffer[fd] == NULL)
		buffer[fd] = ft_strnew(sizeof(char));
	if ((!buffer[fd] && buffer[fd] == NULL) || !line)
		return (-1);
	while (!(tmp = ft_strchr(buffer[fd], '\n')))
	{
		if ((len = ft_line(fd, &buffer[fd])) == 0)
		{
			if (ft_strlen(buffer[fd]) == 0)
				return (0);
			buffer[fd] = ft_strjoin(buffer[fd], "\n");
		}
		else if (len < 0)
			return (-1);
		else
			tmp = ft_strchr(buffer[fd], '\n');
	}
	fill(fd, line, buffer, tmp);
	return (1);
}
