/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:42:01 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/20 09:19:58 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Localiza un caracter en una string. Encuentra la ultima 
//ocurrencia de c en la string apuntada por s

char	*ft_strrchr(const char *s, int c)

{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (0);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
int main()
{
char s[11] = "Hola amigos"; 
char c = 'm';
printf( "s=%s\t", s );
printf( "c=%c\n", c );
printf( "strrchr=%s\n", strrchr( s, c ) );
printf( "strrchr=%s\n", ft_strrchr( s, c ) );
return 0; 
}*/
