/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:02:38 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/10 09:48:09 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Funcion que aplica a cada caracter de la string s
//la funcion f dando como parametros el indice de cada
//caracter dentro de s y la direccion del propio caracter

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f (i, s + i);
		i++;
	}
}
