/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:25:05 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/03 19:42:16 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//La funcion copia una len de bytes de una string src a una string dst
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = -1;
	if (!dst && !src)
		return (NULL);
	if (d < s)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (++i < len)
			d[len - i - 1] = s[len - i -1];
	}
	return (dst);
}
/*int	main(void)
{
	char dest[] = "oldstring";
   	const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   //ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   return(0);
}*/
