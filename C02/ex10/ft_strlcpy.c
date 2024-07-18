/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:33:04 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/14 17:55:24 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (size != 0)
	{
		while ((src[i] != '\0') && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (l);
}
/*#include <stdio.h>
int main()
{
    char str[] = "ttheeer khgeohe 14554 weee";
 char dest[50];
   int i = ft_strlcpy(dest, str, 10);
    printf("%s\n", dest);
    printf("%d",i);

    return 0;
}*/
