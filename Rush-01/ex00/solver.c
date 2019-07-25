/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solver.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/14 16:38:11 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 16:41:56 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	solver(char grille[4][4], char *input)
{
	int x;
	int y;
	int col_up;
	int col_down;
	int col_left;
	int col_right;
	int z;

	x = 0;
	y = 0;
	z = 0;
	col_up = 0;
	col_down = 7;
	col_left = 15;
	col_right = 24;

	while(col_up <= 6)
	{
		if(input[x] == '4')
		{
			grille[z][y] = '1';
			grille[z][y + 1] = '2';
			grille[z][y + 2] = '3';
			grille[z][y + 3] = '4';
		}
		if(x % 2 == 0)
		{
			y++;
			z++;
		}
		col_up++;
		x++;
	}
	z = 0;
	y = 0;
	while(col_down <= 14)
	{
		x++;
		if(input[x] == '4')
		{
			grille[z][y] = '4';
			grille[z][y + 1] = '3';
			grille[z][y + 2] = '2';
			grille[z][y + 3] = '1';
		}
		if(x % 2 == 0)
		{
			y++;
			z++;
		}
		col_down++;
	}
	z = 0;
	y = 0;
	while(col_left <= 22)
	{
		x++;
		if(input[x] == '4')
		{
			grille[z][y] = '1';
			grille[z + 1][y] = '2';
			grille[z + 2][y] = '3';
			grille[z + 3][y] = '4';
		}
		if(x % 2 == 0)
		{
			y++;
			z++;
		}
		col_left++;
	}
	z = 0;
	y = 0;
	while(col_right <= 30)
	{
		x++;
		if(input[x] == '4')
		{
			grille[z][y] = '1';
			grille[z + 1][y] = '3';
			grille[z + 2][y] = '2';
			grille[z + 3][y] = '1';
		}
		if(x % 2 == 0)
		{
			y++;
			z++;
		}
		col_right++;
	}
}
