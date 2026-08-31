/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manand <manand@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 16:59:17 by manand            #+#    #+#             */
/*   Updated: 2026/08/31 17:12:31 by manand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ptr;
	size_t	tot_len;

	tot_len = count * n;
	ptr = malloc(tot_len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tot_len);
	return (ptr);
}
