/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:49:05 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/03 17:42:32 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Funcion que devuelve convertidos a unsigned 	

void *ft_memset(void *str, int c, size_t len)
{
	size_t i;

	i = 0;

	while ( i < len)
	{
		((unsigned char *)str) [i] = c;
		i++;
	}	
	return(str);
}
/*
int	main(void)
{
char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   
   ft_memset(str,'$',15);
   puts(str);
   return(0);
}
*/
