/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:58:02 by ysong             #+#    #+#             */
/*   Updated: 2020/07/04 16:21:48 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void check(int pt_x, int pt_y, int x, int y)
{
	if (pt_x == 0 && pt_y == 0)
	{
		ft_putchar('A');
	}
	else if(pt_x == 0 &&	pt_y == y)
	{
		ft_putchar('A');
	}
	else if(pt_x == x &&  pt_y == 0)
	{
		ft_putchar('C');
	}
	else if(pt_x == x && pt_y == y)
	{
		ft_putchar('C');
	}
}

void check_line(int pt_x, int pt_y, int min_x, int min_y, int x, int y)
{
            if((pt_x == x && pt_y == min_y)||( pt_x == x && pt_y ==y )||
            (pt_x == min_x && pt_y == min_y) ||( pt_x == min_y && pt_y == y))
            {
                check(pt_x, pt_y, x,y);
            }else if (pt_x == x || pt_x == min_x)
            {
                ft_putchar('B');
            }
            else if (pt_y == y || pt_y == min_y)
            {
                ft_putchar('B');
            } 
            else
            {
                ft_putchar(' ');
            }
}

void 	rush(int x, int y)
{
	int min_x, min_y;
   	int pt_x, pt_y;

   	min_x = 0;
   	min_y = 0;
	x = x-1;
	y = y-1;
    pt_y = 0;
    while (pt_y <= y)
    {
		pt_x = 0;
		while(pt_x <= x)
		{
			check_line(pt_x, pt_y, min_x, min_y, x,y);
			pt_x++;
		}
		ft_putchar('\n');
		pt_y++;
	}
}
