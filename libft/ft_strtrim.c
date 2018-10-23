/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:20:55 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/08 14:12:50 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				start;
	int				end;
	char			*string;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
	&& (s[start] != '\0'))
		start++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
	&& (s[end] != '\0'))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	string = ft_strsub(s, start, end - start + 1);
	return (string);
}
