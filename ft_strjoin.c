/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:02:37 by sigutier          #+#    #+#             */
/*   Updated: 2022/05/25 16:13:14 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	int		len_total;

	len_total = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((len_total + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i] != '\0')
		str[j++] = s1[i++];
	while (s2[i] != '\0')
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
