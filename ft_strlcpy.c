/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:25:44 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/10 09:03:44 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//La funcion copia y concatena cadenas con los mismos
//parametros de entrada. Copia a dstsize -1 caracteres 
//de la string src to dst. Si la dstsize no es 0 devuelve
//NULL 
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = ft_strlen(src);
	c = 0;
	if (dstsize == 0)
		return (i);
	if (dstsize != 0)
	{
		while (src[c] != '\0' && c < (dstsize - 1))
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	return (i);
}
