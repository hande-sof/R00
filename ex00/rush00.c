/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:58:02 by ysong             #+#    #+#             */
/*   Updated: 2020/07/05 14:09:24 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_line(int pt_x, int pt_y, int x, int y)
{
	if ((pt_x == x && pt_y == 0) || (pt_x == x && pt_y == y) ||
		(pt_x == 0 && pt_y == 0) || (pt_x == 0 && pt_y == y))
	{
		ft_putchar('o');
	}
	else if (pt_x == x || pt_x == 0)
	{
		ft_putchar('|');
	}
	else if (pt_y == y || pt_y == 0)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void		rush(int x, int y)
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
