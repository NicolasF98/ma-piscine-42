/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_uppercase.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 20:54:24 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 16:32:15 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int vr;

	vr = 1;
	i = 0;
	if (str[0] == '\0')
		vr = 1;
	while ((str[i] != '\0') && (vr == 1))
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			i++;
			vr = 1;
		}
		else
		{
			vr = 0;
		}
	}
	return (vr);
}
