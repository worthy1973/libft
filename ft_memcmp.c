/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:28:46 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/07 12:28:50 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compara los primeros n caracteres del string s1 con
//los primeros n caracteres del string s2. Ambos tratados
//como unsigned char 

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;

	if (n == 0)
		return (0);
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while ((*string1 == *string2) && n - 1 > 0)
	{
		string1++;
		string2++;
		n--;
	}
	return (*string1 - *string2);
}
/*
int main (void) 
{
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "abcdef", 6);
   ft_memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/
