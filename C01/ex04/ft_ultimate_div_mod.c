/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:30:38 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/12 15:41:34 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main()
{

 int x = 12;
 int y = 2;

 int *a = &x;
 int *b = &y;
 ft_ultimate_div_mod(a,b);

 printf("x : %d et y : %d", x,y);

    return 0;
}*/
