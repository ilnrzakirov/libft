/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:48:14 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/15 19:12:11 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t len)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*srs;

	if (d == 0 && s == 0)
		return (NULL);
	dst = (unsigned char *)d;
	srs = (unsigned char *)s;
	i = 0;
	if (dst > srs)
	{
		while (++i <= len)
		{
			dst[len - i] = srs[len - i];
		}
	}
	else
	{
		while (len > 0)
		{
			*(dst++) = *(srs++);
			len--;
		}
	}
	return (d);
}
