/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 11:53:33 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 12:51:27 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int prime;

	prime = 0;
	i = 2;
	if (nb <= 0)
		return (0);
	while (i < nb && (nb % i != 0))
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int i;
	int is_prime;
	int nb_max;

	nb_max = 2147483647;
	if (nb == nb_max)
		return (nb_max);
	i = nb;
	is_prime = 0;
	while (i < nb_max)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		else
			i++;
	}
	return (nb_max);
}
