/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:19:32 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/20 23:11:31 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_set_int(int *ft, int min, int max)
{
	int	i;

	i = min;
	while (i < max)
	{
		*ft = i;
		ft += 1;
		i += 1;
	}
	return (ft);
}

int	*ft_range(int min, int max)
{
	int	*ft;
	int	*ft_sub;
	int	size;

	if (min >= max)
		return (-1);
	size = max - min;
	ft = (int *)malloc(sizeof(int) * size);
	ft_sub = ft;
	ft_set_int(ft_sub, min, max);
	return (ft);
}
