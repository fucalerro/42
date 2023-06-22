/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:26:30 by lferro            #+#    #+#             */
/*   Updated: 2023/06/15 21:33:33 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_i;

	i = 0;
	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_i] = src[i];
		dest_i++;
		i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

/*
int main() 
{
    char dest[10] = "123";
    char dest2[10] = "123";
    char src[] = "45670000";
    unsigned int n = 2;
    
    printf("%s\n\n", strncat(dest, src, n));

    printf("%s", ft_strncat(dest2, src, n));
       
    return (0);
}
*/
