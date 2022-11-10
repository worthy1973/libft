/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:57:06 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/10 09:19:22 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Reserva suficiente memoria para una copia de la string s1,
// hace una copia y retorna un puntero a ella. El puntero puede 
// ser usado como un argumento de la funcion free.
// Retorna NULL si no hay suficiente memoria disponible y se guarda
// un error en ENOMEM

char	*ft_strdup(const char *s1)

{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
