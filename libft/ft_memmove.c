/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:56:19 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 19:54:43 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	char			*tmp;

	tmp = ft_strnew(len);
	if (!tmp)
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	ft_memcpy(tmp, s, len);
	ft_memcpy(d, tmp, len);
	free(tmp);
	return (d);
}
