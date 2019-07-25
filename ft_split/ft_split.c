/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 20:40:20 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 21:11:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char    **ft_split(char *str)
{
	int i;
	int sep_count;
	char **tab;
	char *curr_str;

	i = 0;
	sep_count = 0;
	curr_str = 0;
	while (str[i])
	{
		if (is_separator(str[i]))
			sep_count++;
		i++;
	}
	if (sep_count == 0)
	{
		tab = malloc(sizeof(str) + sizeof(0));
		tab[0] = str;
		tab[1] = 0;
		return tab;
	}
	sep_count = 0;
	tab = malloc(sizeof(0));
	while (*str)
	{
		i = 0;
		while (!is_separator(str[i]) && str[i])
		{
			curr_str[i] = str[i];
			i++;
		}
		tab = malloc(sizeof(tab) + sizeof(curr_str));
		tab[sep_count] = curr_str;
		sep_count++;
		str = str + i + 1;
	}
	return tab;
}
