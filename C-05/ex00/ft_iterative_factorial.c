/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/12 11:48:27 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/15 20:56:47 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int resu;

	i = 1;
	resu = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		resu = resu * (i + 1);
		i++;
	}
	return (resu);
}
