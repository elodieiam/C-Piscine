/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:07:52 by elrichar          #+#    #+#             */
/*   Updated: 2023/03/02 09:48:21 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc (sizeof(int) * (max - min));
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

#include <stdio.h>

int    main(void)
{
    int    *arr;
	int i;

	i = 0;
    arr = ft_range(-14, 2);
    while (i < 16)
	{
		printf(" %d ", arr[i]);
		i++;
	}
	
    free(arr);
    return (0);
}