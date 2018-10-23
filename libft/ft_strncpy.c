/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:57:53 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/07 16:20:59 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] != 0 && len > 0)
	{
		dst[i] = src[i];
		len--;
		i++;
	}
	while (len > 0)
	{
		dst[i] = 0;
		len--;
		i++;
	}
	return (dst);
}
