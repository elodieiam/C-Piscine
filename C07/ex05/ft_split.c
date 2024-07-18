/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:32:31 by elrichar          #+#    #+#             */
/*   Updated: 2023/03/01 10:31:03 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(charset, str[i]))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !is_sep(charset, str[i]))
		i++;
	}
	return (count);
}

int	string_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(charset, str[i]))
	i++;
	return (i);
}

char	*malloc_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	len_word = string_len(str, charset);
	i = 0;
	word = malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	i = 0;
	while (*str)
	{
		while (*str && is_sep(charset, *str))
			str++;
		if (*str && !is_sep(charset, *str))
		{
			tab[i] = malloc_word(str, charset);
			i++;
		}
		while (*str && !is_sep(charset, *str))
			str++;
	}
	tab[i] = 0;
	return (tab);
}

#include <stdio.h>
int main(void)
{
	char str[] = "je sais pas si ca a marche  .    eeeeee ou   ";
	char sep[] = " .";
	char **tab = ft_split(str, sep);

	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
				
}