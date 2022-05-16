/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:24:30 by sigutier          #+#    #+#             */
/*   Updated: 2022/05/16 18:19:31 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	 char	*sub;
	 size_t	size;
	 size_t	i;
	 size_t	str_len;

	 str_len = ft_strlen(s);
	 if (s == NULL)
		 return (NULL);
	 if (str_len < start)
	 {
		 sub = (char *)malloc(1 * sizeof(char));
		 if (!sub)
			 return (NULL);
		 *sub = '\0';
		 return (sub);
	 }
	 if (str_len > len)
		 size = len;
	 else
		 size = str_len;
	 sub = (char *)malloc((size + 1) * sizeof(char));
	 if (sub == NULL)
		 return (NULL);
	 i = 0;
	 while (i < size)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}*/

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	sub = (char *)malloc((len + 1) * sizeof(*s));
	if (!sub)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = 0;
	return (sub);
}
