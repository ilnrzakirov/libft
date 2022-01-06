/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:48:39 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/21 12:35:10 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_degree(int n)
{
	int	deg;

	deg = 0;
	while (n > 9)
	{
		n = n / 10;
		deg++;
	}
	return (deg);
}

void	ft_print(char sym, int fd)
{
	write (fd, &sym, 1);
}

int	ft_square(int degree)
{
	int	result;

	result = 1;
	while (degree != 0)
	{
		result = result * 10;
		degree--;
	}
	return (result);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	degree;
	int	temp;

	if (nb == -2147483648)
	{
		ft_print('-', fd);
		ft_print('2', fd);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_print('-', fd);
		nb = -nb;
	}
	degree = ft_degree(nb);
	while (degree >= 0)
	{
		temp = nb / ft_square(degree);
		ft_print('0' + temp, fd);
		nb = nb % ft_square(degree);
		degree--;
	}
}
