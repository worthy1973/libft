/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:45:46 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/10 09:10:38 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Convierte una mayuscula en minuscula
int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}
