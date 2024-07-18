/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:37:15 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/15 18:22:31 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main()
{
        char sr1[5] = "0123";
        char sr2[5] = "0124";
        printf("%d", ft_strncmp(sr1, sr2, 3));
}
