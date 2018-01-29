/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_latin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:48:56 by irhett            #+#    #+#             */
/*   Updated: 2018/01/29 14:14:52 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			is_latin(int argc, char **argv)
{
	int		i;
	int		len;

	i = 1;
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		if (len < 2)
			return (0);
		if (!(argv[i][len - 1] == '2' && argv[i][len - 2] == '4'))
			return (0);
		i++;
	}
	return (1);
}

void		print_normal(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;

	i = 1;
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		if (len > 2)
			ft_putchar(argv[i][len - 3]);
		j = 0;
		while (j < len - 3)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		if (i < argc - 1)
			ft_putchar(' ');
		i++;
	}
}

void		ft_latin(char **argv, int argc)
{
	int		i;
	int		j;

	if (argc != 1)
	{
		if (is_latin(argc, argv))
			print_normal(argc, argv);
		else
		{
			i = 1;
			while (i < argc)
			{
				j = 1;
				while (argv[i][j])
					ft_putchar(argv[i][j++]);
				ft_putchar(argv[i][0]);
				ft_putchar('4');
				ft_putchar('2');
				if (i < argc - 1)
					ft_putchar(' ');
				i++;
			}
		}
	}
	ft_putchar('\n');
}
