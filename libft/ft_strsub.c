/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:57:21 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 13:33:54 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	int			i;

	i = 0;
	if (s)
	{
		str = ft_strnew(len);
		if (str)
		{
			while (s[start] && len > 0)
			{
				str[i++] = s[start++];
				len--;
			}
			return (str);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
