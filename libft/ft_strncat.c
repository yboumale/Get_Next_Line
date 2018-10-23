/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 10:58:42 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/07 16:35:19 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] && n-- > 0)
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
