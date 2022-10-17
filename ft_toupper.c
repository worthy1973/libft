/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:59:13 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/17 19:13:10 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//Convert a lower-case letter to the corresponding upper-case letter
int	ft_toupper(int c)
{
	{
		if (c >= 'a' && c <= 'z')
				c -= 32;
	}
	return (c);
}
/*
int	main(void)
{

	printf("En mayusculas: %d\n", ft_toupper('A'));
	printf("En mayusculas: %d\n", toupper('i'));
}
*/
