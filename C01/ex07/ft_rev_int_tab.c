/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:21:33 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/12 15:44:36 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/* int main()
{
 
 int tab[5] = {1,2,3,4,5};
 
 ft_rev_int_tab(tab, 5);
 
 int i = 0;
 while (tab[i])
 {
     printf("%d, ", tab[i]);
     i++;
 }
    return 0;
} */
