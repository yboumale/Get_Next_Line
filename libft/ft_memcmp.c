/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:56:49 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 15:06:02 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sr;
	unsigned char *sr1;

	sr = (unsigned char*)s1;
	sr1 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*sr == *sr1 & n-- > 0)
	{
		sr++;
		sr1++;
		if (n == 0)
			return (0);
	}
	if (*sr != *sr1)
	{
		return (*sr - *sr1);
	}
	return (0);
}
