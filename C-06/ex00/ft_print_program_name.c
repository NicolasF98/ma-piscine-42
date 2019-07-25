/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_program_name.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 12:17:48 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 16:30:40 by nfournou    ###    #+. /#+    ###.fr     */
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
	char *prog;

	if (argc >= -1)
	{
		prog = argv[0];
		ft_putstr(prog);
		write(1, "\n", 1);
		return (0);
	}
}
