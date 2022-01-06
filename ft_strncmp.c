/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:53:03 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/10 16:59:57 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t n)
{
	if (!str && !str2)
		return (0);
	while (n && str && (*str == *str2))
	{
		if (*(unsigned char *)str2 == '\0')
			return (0);
		++str;
		++str2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)str - *(unsigned char *)str2);
}
