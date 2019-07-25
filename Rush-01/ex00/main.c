/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 20:14:20 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 19:04:58 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include<unistd.h>

void ft_print(char grille[4][4])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while(x < 4 && y < 4)
	{
		while(x < 4)
		{
			write(1, &(grille[x][y]),1);
			if (x<3)
				write(1, " ", 1);
			x++;
		}
		y++;
		x = 0;
		write(1, "\n", 1);
	}

}


int		main(int argc, char *argv[])
{
	int i;
	char grille[4][4];
	int x;
	int y;

	x = 0;
	y = 0;
	write(1,"Old grille = \n",15);
	while(x < 4 && y < 4)
	{
		while(x < 4)
		{
			grille[x][y] = '0';
			write(1, &(grille[x][y]),1);
			if (x<3)
				write(1, " ", 1);

			x++;
		}
		y++;
		x = 0;
		write(1, "\n", 1);
	}
	grille[1][0] = '1';
	grille[0][1] = '1';
	write(1,"New grille = \n",15);
	ft_print(grille);
	return (0);
}
