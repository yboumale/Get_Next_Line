/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:00:23 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 17:48:35 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	length = ft_strlen(b);
	if (*b == '\0')
		return ((char *)a);
	while (a[i] != '\0' && len-- >= length)
	{
		while (b[j] == a[i + j])
		{
			if (j == length - 1)
				return ((char *)a + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
