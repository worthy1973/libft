/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:29:40 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/09/23 13:44:55 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//Tests for any character for which isupper or islower is true.
//If is true(0), if false(1) 

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", isalpha('1'));
	printf("%d\n", ft_isalpha('1'));
}
*/
