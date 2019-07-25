/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:47:58 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 20:05:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		int i;
		int loop_done;
		int letter_found;
		char *str1;
		char *str2;
		char *result;

		i = 0;
		loop_done = 0;
		letter_found = 0;
		str1 = argv[1];
		str2 = argv[2];
		result = str1;
		while (loop_done == 0 && *str1)
		{
			while (letter_found == 0 && str2[i])
			{
				if (*str1 == str2[i])
				{			
					letter_found = 1;
				}
				i++;
			}
			if (letter_found == 0)
				loop_done = 1;
			letter_found = 0;
			str1++;
		}
		if (loop_done)
			write(1, "\n", 1);
		else
		{
			while (*result)
			{
				write(1, result, 1);
				result++;
			}
			write(1, "\n", 1);
		}
	}
}
