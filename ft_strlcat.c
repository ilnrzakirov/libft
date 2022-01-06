/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:48:55 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/10 16:52:17 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	i = 0;
	n = len_dst;
	if (size > 0 && len_dst < size - 1)
	{
		while (src[i] && (len_dst + i) < (size - 1))
		{
			dst[n] = src[i];
			i++;
			n++;
		}
		dst[n] = '\0';
	}
	if (len_dst > size)
		len_dst = size;
	return (len_dst + len_src);
}
