/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:59:06 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/19 18:16:29 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve una substring de la string s
// La substring comienza desde el indice start y tiene
// una longitud maxima len

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	len_s;
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (start + len == len_s + 1 || len > len_s)
		len = len_s - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(str, s, len + 1);
	return (str);
}
