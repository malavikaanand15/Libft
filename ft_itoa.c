/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manand <manand@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 14:05:27 by manand            #+#    #+#             */
/*   Updated: 2026/09/01 16:43:27 by manand           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long num)
{
	size_t	len;
	
	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		len++;
		num = num/10;
	}
	return (len);
}

static void	ft_strrev(char *str, size_t index, size_t i)
{
	size_t	start;
	size_t	end;
	char	temp;

	end = i - 1;
	start = index;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static void	get_str(char *str, size_t index, long num)
{
	size_t	i;

	i = index;
	if (num == 0)
	{
		str[0] = '0';
		i++;
	}
	else
	{
		while (num != 0)
		{
			str[i] = (num % 10) + '0';
			num = num / 10;
			i++;
		}
	}
	str[i] = '\0';
	ft_strrev(str, index, i);
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	i;
	int	sign;
	long	num;
	char	*str;

	num = n;
	sign = 1;
	i = 0;
	num = get_len(num);
	if (num < 0)
	{
		sign = -1;
		i = 1;
		size++;
		num = -num;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	if (sign == -1)
		str[0] = '-';
	get_str(str, i, num);
	return (str);
}
