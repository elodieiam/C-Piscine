/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:12:28 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/22 17:11:52 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			temp = temp * i;
			i++;
		}
	}
	return (temp);
}
