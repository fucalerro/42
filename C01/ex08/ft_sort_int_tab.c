/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:37:09 by lferro            #+#    #+#             */
/*   Updated: 2023/06/12 15:51:16 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	k = 1;
	while (k == 1)
	{
		i = 0;
		k = 0;
		while (i < size)
		{
			j = i + 1;
			while (j < size)
			{
				if (tab[i] > tab[j])
				{
					ft_swap(&tab[i], &tab[j]);
					k = 1;
				}
				j++;
			}
			i++;
		}
	}
}

/*
int main(void)
{
    int array[] = {6, 5, 4, 456, 3, 1 , 2 ,3 , 6};
    int size = 9;
    
    ft_sort_int_tab(array, size);
    
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    
    return (0);
}
*/
