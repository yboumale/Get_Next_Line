/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:59:21 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/07 17:56:45 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = 0;
	if ((unsigned char)c == '\0')
		return (ft_strchr(s, '\0'));
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			p = (char *)s;
		s++;
	}
	return (p);
}
