/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 15:51:38 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 11:44:46 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *base)
{
	int (i);

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		while (base[y])
		{
			if ((base[i] == base[y] && i != y)
					|| base[y] == '+' || base[y] == '-')
				return (0);
			y++;
		}
		i++;
		y = 0;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long i;

	i = nbr;
	if (ft_check_base(base) == 0)
	{
		return ;
	}
	if (i < 0)
	{
		i = i * (-1);
		ft_putchar('-');
	}
	if (i >= ft_strlen(base))
	{
		ft_putnbr_base(i / ft_strlen(base), base);
	}
	ft_putchar(base[i % ft_strlen(base)]);
}
