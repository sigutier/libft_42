/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sigutier <sigutier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:09 by sigutier          #+#    #+#             */
/*   Updated: 2022/05/25 16:09:10 by sigutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n <= 9)
		;
	{
		num = n + '0';
		write(fd, &num, 1);
	}
	else
	{
	}
}

int	main(void)
{
	FILE *fd;
	fd = fopen("datos.txt", "w");
	int n = 1234;
	ft_putnbr_fd(n, fd);

	return (0);
}