/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:53:19 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/15 18:30:03 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*l)
		return ((char *)b);
	while (b[i] && i < n)
	{
		j = 0;
		while (b[i + j] && l[j] && i + j < n && b[i + j] == l[j])
			j++;
		if (!l[j])
			return ((char *)(b + i));
		i++;
	}
	return (NULL);
}
