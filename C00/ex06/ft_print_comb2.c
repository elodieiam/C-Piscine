/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:47:16 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/10 09:45:35 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(int n)
{
	int	n1;
	int	n2;

	if (n > 9)
	{
		n1 = n / 10;
		n2 = n % 10;
		ft_putchar(n1 + 48);
		ft_putchar(n2 + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_digits(a);
			ft_putchar(32);
			ft_print_digits(b);
			if (a < 98)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			b++;
		}
		a++;
	}
}
