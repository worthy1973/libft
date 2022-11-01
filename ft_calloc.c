/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:41:19 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/17 19:14:27 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Reserva suficiente espacio en la memoria para un numero de 
//objetos que tienen un tamano y devuelve un puntero a ese lugar.
//La memoria reservada es rellenada por 0

void	*ft_calloc(size_t count, size_t size)

{
	void	*aux;
	size_t	asg;

	asg = (count * size);
	aux = malloc(asg);
	if (!aux)
		return (0);
	ft_memset(aux, 0, asg);
	return (aux);
}
