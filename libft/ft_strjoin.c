/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:17:36 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 13:50:33 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;

	i = 0;
	dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (dest)
	{
		ft_strcpy(dest, s1);
		ft_strcat(dest, s2);
		return (dest);
	}
	return (NULL);
}
