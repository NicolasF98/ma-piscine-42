/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/08 20:56:14 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 18:54:12 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int finded;
	int increm;

	increm = 0;
	i = 0;
	finded = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[finded])
		{
			finded++;
			i++;
			increm = 1;
			if (finded == ft_strlen(to_find))
				return (&str[i - finded]);
		}
		if (increm == 0 || finded == 0)
			i++;
		finded = 0;
	}
	return (0);
}
