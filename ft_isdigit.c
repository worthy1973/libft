/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlopez-i <dlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:17:47 by dlopez-i          #+#    #+#             */
/*   Updated: 2022/09/21 12:17:03 by dlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

//Test for a decimal digital character. (0,1,2,3,4,5,6,7,8,9)

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", isdigit(53));
	printf("%d\n", ft_isdigit(53));

}
*/
