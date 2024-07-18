/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:38:40 by elrichar          #+#    #+#             */
/*   Updated: 2023/02/26 10:27:02 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	int		i;
	char	*dest;

	src_len = ft_strlen(src);
	i = 0;
	dest = malloc (sizeof(char) * (src_len + 1));
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    char    *str1;
    char    *str2;
    if (argc > 1)
    {
        str1 = ft_strdup(argv[1]);
        printf("%s\n", str1);

        str2 = ft_strdup(argv[1]);
        printf("%s\n", str2);
        free(str2);
        free(str1);
    }
}*/
