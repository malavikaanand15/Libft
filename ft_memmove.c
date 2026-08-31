/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manand <manand@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 13:11:19 by manand            #+#    #+#             */
/*   Updated: 2026/08/31 17:19:08 by manand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sorc;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	sorc = (const unsigned char *)src;
	if (dst > sorc)
	{
		while (n > 0)
		{
			n--;
			dst[n] = sorc[n];
		}
	}
	else
	{
		while (n > 0)
		{
			*dst++ = *sorc++;
			n--;
		}
	}
	return (dest);
}
