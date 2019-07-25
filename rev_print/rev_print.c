/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:46:28 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 19:03:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	char temp;
	int length;
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		length = 0;
		i = 0;
		while (argv[1][length])
			length++;
		while (i < length / 2)
		{
			temp = argv[1][i];
			argv[1][i] = argv[1][length - i - 1];
			argv[1][length - i - 1] = temp;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
