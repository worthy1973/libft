/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:59:13 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/10 09:08:33 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Convert a lower-case letter to the corresponding upper-case letter
int	ft_toupper(int c)
{
	{
		if (c >= 'a' && c <= 'z')
				c -= 32;
	}
	return (c);
}
