/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:58:02 by ysong             #+#    #+#             */
/*   Updated: 2020/07/05 14:08:58 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int pt_x, int pt_y, int x, int y)
{
	if (pt_x == 0 && pt_y == 0)
	{
		ft_putchar('A');
	}
	else if (pt_x == 0 && pt_y == y)
	{
		ft_putchar('A');
	}
	else if (pt_x == x && pt_y == 0)
	{
		ft_putchar('C');
	}
	else if (pt_x == x && pt_y == y)
	{
		ft_putchar('C');
	}
}

void	check_line(int pt_x, int pt_y, int x, int y)
{
	if ((pt_x == x && pt_y == 0) || (pt_x == x && pt_y == y) ||
			(pt_x == 0 && pt_y == 0) || (pt_x == 0 && pt_y == y))
	{
		check(pt_x, pt_y, x, y);
	}
	else if (pt_x == x || pt_x == 0)
	{
		ft_putchar('B');
	}
	else if (pt_y == y || pt_y == 0)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int pt_x;
	int pt_y;

	x = x - 1;
	y = y - 1;
	pt_y = 0;
	while (pt_y <= y)
	{
		pt_x = 0;
		while (pt_x <= x)
		{
			check_line(pt_x, pt_y, x, y);
			pt_x++;
		}
		ft_putchar('\n');
		pt_y++;
	}
}
