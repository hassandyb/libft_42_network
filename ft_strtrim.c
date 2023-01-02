/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:26:58 by hed-dyb           #+#    #+#             */
/*   Updated: 2022/11/07 20:24:28 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	len--;
	while (len >= 0 && ft_strchr(set, s1[len]) != NULL)
		len--;
	if (len - i < 0)
		return (ft_strdup(""));
	return (ft_substr(s1, i, len - i + 1));
}
