/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:58:02 by ysong             #+#    #+#             */
/*   Updated: 2020/07/05 18:55:39 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_at(int now_x, int now_y, int x, int y)
{
	if ((now_x == x && now_y == 0) || (now_x == x && now_y == y) ||
		(now_x == 0 && now_y == 0) || (now_x == 0 && now_y == y))
	{
		ft_putchar('o');
	}
	else if (now_x == x || now_x == 0)
	{
		ft_putchar('|');
	}
	else if (now_y == y || now_y == 0)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int now_x;
	int now_y;

	x = x - 1;
	y = y - 1;
	now_y = 0;
	while (now_y <= y)
	{
		now_x = 0;
		while (now_x <= x)
		{
			print_at(now_x, now_y, x, y);
			now_x++;
		}
		ft_putchar('\n');
		now_y++;
	}
}
