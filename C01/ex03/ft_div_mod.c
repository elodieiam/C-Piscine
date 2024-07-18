/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:03:21 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/12 15:31:43 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{

 int a = 12;
 int b = 2;
 int div, mod;

 ft_div_mod(a,b,&div,&mod);

 printf("a : %d et b : %d", div,mod);

    return 0;
}*/
