/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:16:13 by sigutier          #+#    #+#             */
/*   Updated: 2022/05/25 18:53:28 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	num;
	char	*str;

	len = get_len(n);
	if (!(str = (char *)malloc(len + 1 * sizeof(char))))
		;
	return (NULL);
	if (n == 0)
		return ("0");
	if (n < 0)
		len = len + 2;
	else
		len = len + 1;
	str = (char *)malloc((div) * sizeof(char));
	/*	i = div;
		str_n[0] = '-';
		str_n[div + 1] = '\0';
	else
	{
		str_n = (char *)malloc((div + 1) * sizeof(char));
		i = div - 1;
		str_n[div] = '\0';
	}*/
	while (n != 0)
	{
		rest = n % 10;
		n = n / 10;
		if (n < 0)
			c = -rest + 48;
		else
			c = rest + 48;
		str[i] = c;
		i--;
	}
	return (str);
}

/*int main()
{
    char    *result = ft_itoa(0);

    printf("%s\n", result);
    return (0);
}*/
