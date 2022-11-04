/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:07:26 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/04 11:50:47 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Elimina y libera el nodo ’lst’ dado y todos los consecutivos 
//de ese nodo, utilizando la función ’del’ y free.
//Al final, el puntero a la lista debe ser NULL.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (lst)
	{	
		del (lst->content);
		free (lst);
	}
}
