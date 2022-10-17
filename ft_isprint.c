/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:57:56 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/17 18:09:14 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//Verifica que el caracter es imprimible.
//Si es verdadero devuelve 1, si es falso devuelve 0

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int main(void)

{
	printf("%d\n", isprint('%'));
	printf("%d\n", ft_isprint('%'));
}*/
