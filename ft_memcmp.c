/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:28:46 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/10 09:47:06 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compara los primeros n caracteres del string s1 con
//los primeros n caracteres del string s2. Ambos tratados
//como unsigned char

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
