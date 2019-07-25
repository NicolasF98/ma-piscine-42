/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_div_mod.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 16:59:54 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/07 10:59:54 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmpa;
	int tmpb;
	int div;
	int mod;

	tmpa = *a;
	tmpb = *b;
	div = tmpa / tmpb;
	mod = tmpa % tmpb;
	*a = div;
	*b = mod;
}
