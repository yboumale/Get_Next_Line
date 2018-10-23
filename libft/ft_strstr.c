/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:00:05 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 17:51:27 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (!ft_memcmp(haystack, needle, i))
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
