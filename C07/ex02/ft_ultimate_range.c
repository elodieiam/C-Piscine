/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:46:14 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/26 10:22:04 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (*range == 0)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

/*#include <stdio.h>

int    main(void)
{
	int	*p;
	int	i;
	i = ft_ultimate_range(&p, 2, 97) - 1;
	printf("%d\n",i);
	while (i >= 0)
	{
		printf("%d, ", p[i]);
		i--;
	}
	free (p);
}*/
