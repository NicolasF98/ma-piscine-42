/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_did_not_find.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lfourage <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 17:44:13 by lfourage     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:29:53 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ourft.h"

void	ft_putindex(char *str)
{
	int i;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '\n')
			return ;
	}
}

int		ft_cut(int nbr, int n, int *s, int *dico[])
{
	int		t;

	t = 0;
	if (nbr >= n)
	{
		t = nbr / n;
		ft_make_nbr(t, dico);
		ft_putstr(s);
		nbr = nbr - (n * t);
	}
	return (nbr);
}

void	ft_did_not_find(int nbr, char *dico[])
{
	int t;

	nbr = ft_cut(nbr, 1000000000, "billion ", dico);
	nbr = ft_cut(nbr, 1000000, "million ", dico);
	nbr = ft_cut(nbr, 1000, "thousand ", dico);
	nbr = ft_cut(nbr, 100, "hundred ", dico);
	if (nbr >= 20)
	{
		t = (nbr / 10) * 10;
		ft_make_nbr(t, dico);
		t = nbr / 10;
		nbr = nbr - (10 * t);
	}
	if (nbr == 0)
		return ;
	ft_make_nbr(nbr, dico);
}

void	ft_make_nbr(int nbr, char *dico[])
{
	int i;
	int j;
	int resu;

	resu = 0;
	i = 0;
	j = 0;
	while (resu != nbr)
	{
		while (dico[i][j] >= '0' && dico[i][j] <= '9')
			resu = resu * 10 + (dico[i][j++] - '0');
		i++;
		j = 0;
		if (resu > nbr || ((resu == 1000000000) && (nbr != 1000000000)))
		{
			ft_did_not_find(nbr, dico);
			return ;
		}
		if (resu != nbr)
			resu = 0;
	}
	if (resu == 100 || resu == 1000 || resu == 1000000 || resu == 1000000000)
		ft_putstr("one ");
	ft_putindex(&dico[i - 1][j]);
}
