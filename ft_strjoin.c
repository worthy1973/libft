/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:37:28 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/19 16:14:33 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve una nueva string formada por la concateacion
// de las strings s1 y s2

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	if (!s1)
		ft_strdup("\0");
	else
	{
		while (s1[i] != '\0')
			str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
		str[j++] = s2[i++];
	str[j] = ('\0');
	return (str);
}
