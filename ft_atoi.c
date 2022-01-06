/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:47:21 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/21 12:28:47 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int						i;
	int						si;
	unsigned long long int	result;

	i = 0;
	si = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i++] == '-')
			si = -1;
	}
	result = 0;
	while (s[i] >= '0' && s[i] <= '9' )
		result = (result * 10) + (s[i++] - '0');
	if (i > 19)
	{
		if (si < 0)
			return (0);
		return (-1);
	}
	return (result * si);
}
