/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:59:48 by sigutier          #+#    #+#             */
/*   Updated: 2022/04/25 12:04:52 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return(c - 32);
	else
		return (0);
}

/*int	main()
{
	int c = 97;
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	return (0);
}*/
