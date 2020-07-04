/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:58:02 by ysong             #+#    #+#             */
/*   Updated: 2020/07/04 16:41:39 by ysong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void check_line(int pt_x, int pt_y, int min_x, int min_y, int x, int y)
{
            if((pt_x == x && pt_y == min_y)||( pt_x == x && pt_y == y )||
            (pt_x == min_x && pt_y == min_y) ||( pt_x == min_y && pt_y == y))
            {
                ft_putchar('o');
            }else if (pt_x == x || pt_x == min_x)
            {
                ft_putchar('|');
            }
            else if (pt_y == y || pt_y == min_y)
            {
                ft_putchar('-');
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
