/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:48:47 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/15 14:29:35 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int sym)
{
	int		i;
	char	*p;

	p = (char *)str;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == (char) sym)
			return (&p[i]);
		i++;
	}
	if (p[i] == (char) sym)
		return (&p[i]);
	return (NULL);
}
