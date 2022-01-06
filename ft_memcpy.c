/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:41:45 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/10 16:42:49 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s, const void *c, size_t n)
{
	int		i;
	char	*copy_s;
	char	*copy_c;

	i = 0;
	copy_s = (char *)s;
	copy_c = (char *)c;
	if (copy_s || copy_c)
	{
		while (n-- > 0)
		{
			*(copy_s + i) = *(copy_c + i);
			i++;
		}
	}
	return (s);
}
