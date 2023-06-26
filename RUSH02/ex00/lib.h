/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:11:55 by lferro            #+#    #+#             */
/*   Updated: 2023/06/25 22:52:52 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

char	*file_to_string(char *filename);
int		filelen(char *filename);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_recursive_power(int nb, int power);
char	*ft_strstr(char *str, char *to_find);
void	ft_putstr(char *str);
int		print_nbr_letter(char *dictstring, char *chopped_nbr);
char	*fill_with_zero(char *str, int size);
char	**parse_string_nbr(char *nbrstr);

#endif