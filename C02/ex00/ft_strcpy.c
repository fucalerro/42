/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:41:29 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 09:53:55 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src_txt[] = "source texhhhhhhhhhhhht";
	char dest_txt[] = "destination text";
	ft_strcpy(dest_txt, src_txt);

	
	for (int i = 0; dest_txt[i] != '\0'; i++)
        printf("%c", dest_txt[i]);



	return (0);
}
*/
