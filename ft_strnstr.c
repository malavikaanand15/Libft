/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manand <manand@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:30:27 by manand            #+#    #+#             */
/*   Updated: 2026/08/31 17:23:20 by manand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ned[0])
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] && ned[j] && (i + j) < len && hay[i + j] == ned[j])
			j++;
		if (!ned[j])
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
