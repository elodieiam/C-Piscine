/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:25:46 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/25 10:19:06 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= 32 || str[i] > 126)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	int			i;
	long int	n;

	i = ft_strlen(base);
	n = (long int)nbr;
	if (!(base_is_valid(base)))
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= i)
	{
		ft_putnbr_base(n / i, base);
		ft_putnbr_base(n % i, base);
	}	
	else if (n < i)
		write (1, &base[n], 1);
}
