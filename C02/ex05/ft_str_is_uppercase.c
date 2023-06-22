/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:12:09 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 09:55:19 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i] != '\0' && k == 1)
	{
		if (str[i] < 65 || str[i] > 90)
			k = 0;
		i++;
	}
	return (k);
}

/*
int main(void)
{
    char    txt[] = "";

    ft_str_is_uppercase(txt);
    printf("%d\n", ft_str_is_uppercase(txt));
    return (0);
}
*/
