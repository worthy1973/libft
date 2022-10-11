/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:24:35 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/11 17:59:43 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//La funcion copia n bytes del area de memoria src al area de memoria dst
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{	
		d[i] = s[i];
		i++;
	}
	return (dst);
}	
/*int main (void) 

{
   const char src[50] = "Brand New";
   char dest[50];
   strcpy(dest,"Old School");
   printf("Antes de usar memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("Despues de usar memcpy dest = %s\n", dest);
   
   return(0);
}*/
