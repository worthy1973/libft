/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:08:33 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/11/04 11:43:06 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Itera la lista ’lst’ y aplica la función ’f’ al
//contenido de cada nodo. Crea una lista resultante
//de la aplicación correcta y sucesiva de la función
//’f’ sobre cada nodo. La función ’del’ se utiliza
//para eliminar el contenido de un nodo, si hace falta.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*temp;
	t_list	*new;
	t_list	*elem;

	if (!lst)
		return (0);
	new = NULL;
	while (lst)
	{
		temp = f(lst->content);
		elem = ft_lstnew(temp);
		if (!elem)
		{
			del(temp);
			ft_lstclear(&new, del);
		}
		ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
