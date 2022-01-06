/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarlee <bcarlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:54:42 by bcarlee           #+#    #+#             */
/*   Updated: 2021/10/21 12:33:26 by bcarlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int s, size_t l)
{
	size_t	i;
	size_t	k;
	char	*res;

	if (!str)
		return (0);
	if (ft_strlen(str) <= s || s < 0)
		return (ft_strdup(""));
	if (ft_strlen(str) < (s + l))
		l = ft_strlen(str) - s;
	res = malloc((sizeof(char) * (l + 1)));
	if (!res)
		return (NULL);
	k = 0;
	if (s >= 0 && (ft_strlen((char *)str) > s))
	{
		i = s;
		while (str[i] && k < l)
			res[k++] = str[i++];
		res[k] = '\0';
		return (res);
	}
	res[k] = '\0';
	return (res);
}
