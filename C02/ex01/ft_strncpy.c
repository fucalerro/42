/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:48:03 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 11:31:39 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(void)
{
    char src_txt[] = "source texhhhhhhhhhhhht";
    char dest_txt[] = "destination text";
    ft_strncpy(dest_txt, src_txt, 5);
	
 //   for (int i = 0; dest_txt[i] != '\0'; i++)
   //     printf("%c", dest_txt[i]);
	
//	strncpy(src_txt, dest_txt, 5);
    for (int i = 0; dest_txt[i] != '\0'; i++)
       printf("%c", dest_txt[i]);
    return (0);
}
*/
