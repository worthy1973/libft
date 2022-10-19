/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:29:14 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/18 16:11:00 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//Funcion del tipo encuentra una substring en una string
//Encuentra la primera ocurrencia de la cadena needle en la 
//cadena haystack cuando no se buscan mas de len caracteres

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			i;
	size_t		needle_len;

	if (*needle == '\0')
		return ((char *)(unsigned long)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i])
			i++;
		if (needle[i] == '\0')
			return ((char *)(unsigned long)haystack);
			haystack++;
			len--;
	}
	return (0);
}
/*
int main () 
{
   const char haystack[20] = "42LaunchLab";
   const char needle[10] = "Lab";
   char *ret;

   ret = strnstr(haystack, needle, 20);

   printf("La subcadena es: %s\n", ret);
   
   ret = ft_strnstr(haystack, needle, 20);

   printf("La subcadena es: %s\n", ret);
   return(0);
}*/
