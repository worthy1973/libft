/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:11:17 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/10 09:34:39 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Envia el caracter c al file descriptor especificado

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
