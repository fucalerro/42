/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:32:07 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 11:42:42 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 1;
	if (str[0] < 123 && str[0] > 96)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] >= 0 && str[i - 1] < 48)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 122)
				str[i] = str[i] - 32;
		}
		if (str[i] > 64 && str[i] < 91)
			if (str[i - 1] > 96 && str[i - 1] < 123)
				str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char text[] = "salut, comEcintrigunoeirugnrowieu+et+un";
	ft_strupcase(text);
	printf("%s\n", text);
	return (0);
}
*/
