/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:08:12 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/04 15:53:34 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Itera la lista ’lst’ y aplica la función ’f’ en el
//contenido de cada nodo.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
