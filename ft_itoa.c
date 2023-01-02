/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:20:53 by hed-dyb           #+#    #+#             */
/*   Updated: 2022/11/06 10:28:44 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*p;
	unsigned long	nbr;

	nbr = n;
	len = intlen(nbr);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
		nbr = nbr * (-1);
	}
	if (nbr == 0)
		p[0] = '0';
	p[len] = '\0';
	len = len - 1;
	while (nbr > 0)
	{
		p[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (p);
}
