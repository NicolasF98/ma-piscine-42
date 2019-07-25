/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_div_mod.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/06 13:56:00 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/06 16:58:37 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int divval;
	int modval;

	divval = a / b;
	modval = a % b;
	*div = divval;
	*mod = modval;
}
