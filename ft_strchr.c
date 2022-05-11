/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:11:28 by sigutier          #+#    #+#             */
/*   Updated: 2022/05/11 19:05:23 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
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
