/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:01:10 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/09 02:37:55 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long int	res;
	int			negative;
	int			i;

	negative = 1;
	i = 0;
	res = 0;
	while (str[i] == '\0' || str[i] == '\t' || str[i] == '\n'
	|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		negative = 1;
		i++;
	}
	while ((str[i] != '\0') && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
	}
	return ((int)(res * negative));
}
