/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:56:33 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/07 13:12:42 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	while (n-- > 0)
	{
		str = (unsigned char*)s;
		if (*str == (unsigned char)c)
		{
			return (str);
		}
		s++;
	}
	return (NULL);
}
