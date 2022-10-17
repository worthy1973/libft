/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:28:25 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/17 18:10:22 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Localiza la primera aparición del carácter c (convertido a unsigned char) 
//en los primeros n caracteres (cada uno interpretado como un unsigned char) 
//del objeto apuntado por s

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "Pronto llegaras a la luz";
   const char ch = 'l';
   char *ret;

   ret = memchr(str, ch, strlen(str));
   printf("Cadena despues de |%c| es - |%s|\n", ch, ret);
   ret = ft_memchr(str, ch, strlen(str));
   printf("UMF. Cadena despues de |%c| es - |%s|\n", ch, ret);
   return(0);
}*/
