/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:22:59 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/17 17:58:48 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//Verifica que el caracter que te pasan es alfanumerico
//Devuelve no-zero si es letra o numero, si no lo es devuelve 0

int	ft_isalnum(int c)

{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)

{
	printf("%d\n", isalnum('*'));
	printf("%d\n", ft_isalnum('*'));	
}*/
