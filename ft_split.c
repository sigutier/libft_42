/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:24 by sigutier          #+#    #+#             */
/*   Updated: 2022/05/25 16:15:49 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

// calcula cuantos strings hay en *s
static int	ft_count_strings(char const *s, char c)
{
	int	has_found_delimiter;
	int	count_strings;
	int	i;

	has_found_delimiter = 1;
	count_strings = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && has_found_delimiter == 1)
		{
			count_strings++;
			has_found_delimiter = 0;
		}
		else if (s[i] == c)
		{
			has_found_delimiter = 1;
		}
		i++;
	}
	return (count_strings);
}

// creamos tantos arrays de strings como 'count_strings' hay: char** --> char*
// almacenamos un espacio en la memoria para cada string sabiendo
// 'count_letters' hay en cada uno: char* --> char
// calcula cuantos caracteres hay en cada string: char
static char	**ft_build_arrays_strings(char const *s, char c)
{
	char	**array;
	int		count_letters;
	int		i;
	int		j;

	array = (char **)malloc(ft_count_strings(s, c) * sizeof(char *));
	count_letters = 0;
	i = 0;
	j = 0;
	if (!s[i] || !array[j])
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			count_letters++;
		else if (s[i] == c && count_letters > 0)
		{
			array[j++] = (char *)malloc((count_letters + 1) * sizeof(char));
			count_letters = 0;
		}
		i++;
	}
	if (count_letters > 0)
		array[j] = (char *)malloc((count_letters + 1) * sizeof(char));
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**string_array;

	string_array = ft_build_arrays_strings(s, c);
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			string_array[j][k] = s[i];
			k++;
		}
		else if (s[i] == c && k > 0)
		{
			string_array[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	return (string_array);
}

int	main(void)
{
	char	**split;

	split = ft_split("to to", ' ');
	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
	return (0);
}
