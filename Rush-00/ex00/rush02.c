/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush02.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tperigau <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 10:57:02 by tperigau     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 19:10:55 by algoubla    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	debut(int cl, int cc, int c)
{
	char	cdeb;

	if (cl == 1 && cc == 1)
	{
		cdeb = 'A';
		ft_putchar(cdeb);
	}
	if (cl == 1 && cc != 1 && cc != c)
	{
		cdeb = 'B';
		ft_putchar(cdeb);
	}
	if (cl == 1 && cc == c && c != 1)
	{
		cdeb = 'A';
		ft_putchar(cdeb);
	}
}

void	milieu(int cl, int cc, int c, int l)
{
	char	cmil;

	if (cc == 1 && cl != 1 && cl != l)
	{
		cmil = 'B';
		ft_putchar(cmil);
	}
	if (cl != 1 && cl != l && cc != 1 && cc != c)
	{
		cmil = ' ';
		ft_putchar(cmil);
	}
	if (cc == c && cl != 1 && cl != l && c != 1)
	{
		cmil = 'B';
		ft_putchar(cmil);
	}
}

void	fin(int cl, int cc, int c, int l)
{
	char	cfin;

	if (cl == l && cc == 1 && l != 1)
	{
		cfin = 'C';
		ft_putchar(cfin);
	}
	if (cl == l && cc != 1 && cc != c)
	{
		cfin = 'B';
		ft_putchar(cfin);
	}
	if (cl == l && cc == c && l != 1 && c != 1)
	{
		cfin = 'C';
		ft_putchar(cfin);
	}
}

int		rush(int x, int y)
{
	int		cc;
	int		cl;
	char	rtn;

	rtn = '\n';
	cc = 1;
	cl = 1;
	if (x <= 0 || y <= 0)
		return (0);
	while (cl <= y)
	{
		while (cc <= x)
		{
			debut(cl, cc, x);
			milieu(cl, cc, x, y);
			fin(cl, cc, x, y);
			cc++;
		}
		cc = 1;
		ft_putchar(rtn);
		cl++;
	}
	return (0);
}
