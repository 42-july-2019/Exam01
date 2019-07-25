/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 20:08:19 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 20:36:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i;
	int length;
	int *tab;
	int is_in_order;
	int diff_to_add;

	i = 1;
	is_in_order = start - end > 0 ? 1 : 0;
	length = end - start < 0 ? (end - start) * -1  : end - start;
	tab = malloc(sizeof(int) * (length + 1));
	diff_to_add = is_in_order ? 1 : -1;
	tab[0] = end;
	while (i <= length && tab[i - 1] != start)
	{
		tab[i] = tab[i - 1] + diff_to_add;
		i++;
	}
	return tab;
}
