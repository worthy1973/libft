/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:29:10 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/17 18:03:11 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//Verifica que el caracter es alfanumerico
//Devuelve 1 si es verdadero y 0 si es falso
int	ft_isascii(int c)

{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
printf("%d\n", isascii('i'));
printf("%d\n", ft_isascii('i'));
}
*/
