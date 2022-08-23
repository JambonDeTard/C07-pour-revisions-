/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:59:34 by avillard          #+#    #+#             */
/*   Updated: 2022/08/17 12:03:11 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max > min)
	{
		*range = (int *)malloc(sizeof(int) * (max - min) + 1);
		if (*range[i])
		{
			while (min < max)
				*range [i++] = min++;
		}
		return (i);
	}
	return (0);
}
