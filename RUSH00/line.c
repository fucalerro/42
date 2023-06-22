/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:24:19 by lferro            #+#    #+#             */
/*   Updated: 2023/06/10 20:09:06 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putchar_r(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	printline_1(int x)
{
	int	i;

	putchar('A');
	i = 0;
	while (i < (x - 2))
	{
		putchar('B');
		i++;
	}
	putchar('C');
	putchar('\n');
}

void	printline_2(int x)
{
	int	i;

	i = 0;
	while (i < (x -2))
	{
		putchar(' ');
		i++;
	}
	putchar('B');
	putchar('\n');
}

void	printline_3(int x)
{
	int	i;

	putchar('C');
	i = 0;
	while (i < (x - 2))
	{
		putchar('B');
		i++;
	}
	putchar('A');
	putchar('\n');
}

void	inside_if(int x, int y)
{
	int	i;

	printline_1(x);
	i = 0;
	while (i < (y - 2))
	{
		printline_2(x);
		i++;
	}
	printline_3(x);
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x != 0 && y != 0)
	{
		if (x != 1 && y != 1)
		{
			inside_if(x, y);
		}
		else if (x == 1 && y != 1)
		{
			putchar_r('A');
			while (i < (y - 2))
			{
				putchar_r('B');
				i++;
			}
			putchar_r('C');
		}
		else if (x == 1 && y == 1)
			putchar_r('A');
		else if (x != 1 && y == 1)
			printline_1(x);
	}
}

int	main(void)
{
	rush(3, 1);
	return (0);
}
