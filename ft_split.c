/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:03:28 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/24 20:13:43 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Reserva utilizando un malloc un array de strings 
 * resultante de separar la string 's' en substrings utilizando
 * el caracter 'c' como delimitador. va a devoler una matriz con
 * diferentes strings segun el separador que usemos. En el caso
 * de que no haya memoria debe devolver NUll
*/
static int	ft_count_words(const char *str, char c)
{
	int	sum;
	int	p;

	sum = 0;
	p = 0;
	while (*str != '\0')
	{
		if t(*str != c && p == 0)
		{
			sum++;
			p = 1;
		}
		else if (*str == c)
			p = 0;
		str++;
	}
	return (sum);
}

static int	ft_len(const char *str, int i, char c)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_error(char **new, int j)
{
	while (j >= 0)
	{
		free(new[j]);
		j--;
	}
	free(new);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**new;

	i = 0;
	j = 0;
	new = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	while (j < ft_count_words(s, c))
	{
		while (s[i] == c)
		i++;
		new[j] = ft_substr(s, i, ft_len(s, i, c));
		if (!new[j])
			return (ft_error(new, j));
		i += ft_len(s, i, c);
		j++;
	}
	new[j] = 0;
	return (new);
}
