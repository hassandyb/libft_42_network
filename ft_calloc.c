/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:53:06 by hed-dyb           #+#    #+#             */
/*   Updated: 2022/11/05 20:59:14 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*p;

	i = 0;
	p = malloc (count * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < count * size)
	{
		((char *)p)[i] = '\0';
		i++;
	}
	return (&p[0]);
}
