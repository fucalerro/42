/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:55:23 by lferro            #+#    #+#             */
/*   Updated: 2023/06/25 23:39:54 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

// get the size of the numbers.dict file
int	filelen(char *filename)
{
	int		size;
	int		temp;
	int		fd;
	char	*buffer;

	temp = 1;
	size = 0;
	fd = open(filename, O_RDONLY);
	buffer = malloc(1000 * sizeof(char));
	while (temp)
	{
		temp = read(fd, buffer, 1000);
		size += temp;
	}
	close(fd);
	return (size);
}

// takes the name of the dict file
// creates a string with the dict
char	*file_to_string(char *filename)
{
	char	*resultat;
	int		size;
	int		fd;

	fd = open(filename, O_RDONLY);
	size = filelen(filename);
	resultat = malloc(size + 1);
	if (resultat == 0)
		return (0);
	read(fd, resultat, size);
	resultat[size] = 0;
	return (resultat);
}

// print letters from the dict
int	print_nbr_letter(char *dictstring, char *chopped_nbr)
{
	char	*match;
	char	*startstr;
	char	*endstr;
	int		nbrlen;

	if (ft_strstr(dictstring, chopped_nbr) == 0)
		return (-1);
	else
	{
		match = ft_strstr(dictstring, chopped_nbr);
		startstr = ft_strstr(match, ": ") + 2;
		endstr = ft_strstr(startstr, "\n");
		nbrlen = ft_strlen(startstr) - ft_strlen(endstr);
		write(1, startstr, nbrlen);
		write(1, " ", 1);
	}
	return (0);
}

// check if number is between 0 and 20
int	check_twelve(char *nbrstr)
{
	int	nbr;

	nbr = ft_atoi(nbrstr);
	if (nbr < 21)
		return (1);
	else
		return (0);
}

// chop numbers into a 2D array
char	**parse_string_nbr(char *nbrstr)
{
	int		size;
	int		i;
	int		j;
	char	**nbrtab;

	i = 0;
	size = ft_strlen(nbrstr) + 1;
	if (check_twelve(nbrstr) == 1)
	{
		nbrtab = (char **)malloc(sizeof(char *));
		nbrtab[i] = malloc(size * sizeof(char));
		while (nbrstr[i])
		{
			nbrtab[0][i] = nbrstr[i];
			i++;
		}
	}
	else
	{
		i = 0;
		j = size;
		nbrtab = (char **)malloc(size * sizeof(char *));
		while (i < size - 1)
		{
			nbrtab[i] = malloc(j * sizeof(char));
			nbrtab[i] = fill_with_zero(nbrtab[i], j - 1);
			nbrtab[i][0] = nbrstr[i];
			i++;
			j--;
		}
	}
	return (nbrtab);
}
