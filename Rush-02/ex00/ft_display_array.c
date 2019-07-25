/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_array.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lfourage <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 23:03:41 by lfourage     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:04:04 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ourft.h"

void	ft_display_array(char **array)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (array[i])
	{
		while (array[i][j])
		{
			ft_putchar(array[i][j]);
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
