/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:13:55 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/07 13:14:01 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *copy;

	copy = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (copy)
		ft_strcpy(copy, s1);
	return (copy);
}
