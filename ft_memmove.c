/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:43:37 by hed-dyb           #+#    #+#             */
/*   Updated: 2022/11/06 10:44:31 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	i = len - 1;
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (pdst < psrc)
		ft_memcpy(pdst, psrc, len);
	while (pdst > psrc && i >= 0)
	{
		pdst[i] = psrc[i];
		i--;
	}
	return (pdst);
}
