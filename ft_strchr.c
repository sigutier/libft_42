/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:11:28 by sigutier          #+#    #+#             */
/*   Updated: 2022/04/25 14:01:36 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*int	main()
{
	const char	*s = "hola que tal";
	const char	ch = 'q';
	char	*ret;
	
	ret = ft_strchr(s, ch);
	
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/
