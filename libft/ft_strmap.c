/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:18:16 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 13:28:03 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out_o;
	int		i;

	i = 0;
	out_o = ft_strnew(ft_strlen(s));
	if (!out_o)
		return (NULL);
	while (s[i] != '\0')
	{
		out_o[i] = f(s[i]);
		i++;
	}
	return (out_o);
}
