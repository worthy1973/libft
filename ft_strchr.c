/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:36:10 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/19 18:10:33 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Localiza un caracter en una string.Encuentra la primera 
//ocurrencia de c en la string apuntada por s.

char	*ft_strchr(const char *str, int c)

{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	if (!(unsigned char)c && str[i] == '\0')
		return ((char *)str + i);
	return (NULL);
}
/*
int main()
{
	char s[11] = "Hola amigos"; 
	char c = 'm';
	printf( "s=%s\t", s );
	printf( "c=%c\n", c );
	printf( "strrchr=%s\n", strchr( s, c ) );
	printf( "strrchr=%s\n", ft_strchr( s, c ) );
	return 0; 
}*/
