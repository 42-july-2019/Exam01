/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:06:33 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 19:45:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		str = argv[1];
		while (str[i])
		{
			if (str[i] == 'z')
				str[i] = 'a';
			else if (str[i] == 'Z')
				str[i] = 'A';
			else if ((str[i] >= 'a' && str[i] < 'z') ||
					(str[i] >= 'A' && str[i] < 'Z'))
				str[i] = str[i] + 1;
			write(1, &str[i], 1);
			i++;
		}
		write(1,"\n", 1);
	}
}
