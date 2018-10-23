/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:10:42 by yboumale          #+#    #+#             */
/*   Updated: 2018/10/07 19:10:58 by yboumale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*dest;

	dest = malloc(size);
	if (dest == NULL)
		return (0);
	ft_bzero(dest, size);
	return (dest);
}
