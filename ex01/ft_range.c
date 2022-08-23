/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:31:07 by avillard          #+#    #+#             */
/*   Updated: 2022/08/17 11:54:40 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (max < min || !(arr))
		return (0);
	while (min <= max)
		arr[i++] = min++;
	return (arr);
}
