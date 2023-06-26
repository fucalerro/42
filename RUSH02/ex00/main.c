/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:55:31 by lferro            #+#    #+#             */
/*   Updated: 2023/06/25 23:39:54 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_error(int *argcount)
{
	if (*argcount != 2)
		ft_putstr("Invalid number of arguments");
}

int	main(int ac, char **av)
{
	int		i;
	char	*dictstring;
	char	**chopped_tab;

	ft_error(&ac);
	i = 0;
	while (av[1][i])
	{
		if (!(av[1][i] > 47 && av[1][i] < 58))
		{
			ft_putstr("Error");
			return (0);
		}
		i++;
	}
	dictstring = file_to_string("numbers.dict");
	chopped_tab = parse_string_nbr(av[1]);
	i = 0;
	while (chopped_tab[i])
		print_nbr_letter(dictstring, chopped_tab[i++]);
	write(1, "\n", 1);
	return (0);
}
