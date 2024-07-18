/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:45:49 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/22 09:24:25 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = (argc - 1);
	j = 0;
	if (argc > 1)
	{
		while (i >= 1)
		{
			j = 0;
			while (argv[i][j])
			{
				write (1, &argv[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i--;
		}
	}
	return (0);
}
