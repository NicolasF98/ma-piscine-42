/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_params.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 12:27:53 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/16 16:29:35 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	char	*prog;
	int		i;

	i = 1;
	while (i != argc)
	{
		prog = argv[i];
		ft_putstr(prog);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
