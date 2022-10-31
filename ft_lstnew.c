/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:37:19 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/10/31 19:21:06 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc) and returns a new element. 
 The variable ’content’ is initialized with the value 
 of the parameter ’content’. The variable ’next’ is initialized to NULL.*/

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
Declara la variable t_list
Aloja con malloc un nuevo elemento
Protege el error de que no exista new
La variable content se inicializa con el contenido de content
La variable next se inicializa con NULL
Devuelve Next
*/
