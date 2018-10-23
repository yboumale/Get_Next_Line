/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:11:29 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/07 16:01:49 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)src;
	b = (unsigned char*)dst;
	while (n-- > 0)
	{
		*b = *a;
		if (*a == (unsigned char)c)
			return ((void*)b + 1);
		a++;
		b++;
	}
	return (NULL);
}
