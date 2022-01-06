/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:48:49 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/10 16:45:22 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		len;

	len = ft_strlen((char *)s);
	p = (char *)malloc(sizeof(*s) * (len + 1));
	if (p == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		p[len] = s[len];
		len++;
	}
	p[len] = '\0';
	return (p);
}
