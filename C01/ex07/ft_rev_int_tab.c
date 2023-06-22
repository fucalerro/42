/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:52:52 by lferro            #+#    #+#             */
/*   Updated: 2023/06/12 15:56:12 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

/*
int main(void)
{
    int array[] = {1, 2, 3, 4 ,5};
    int size = 5;

    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    ft_rev_int_tab(array, size);

     for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return (0);
}
*/
