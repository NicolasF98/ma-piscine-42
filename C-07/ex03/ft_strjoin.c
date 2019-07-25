/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/18 11:21:21 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 14:05:54 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len_sep(char *sep)
{
	int		i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

int		ft_len_strs(char **strs)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while (strs[i] != '\0')
	{
		while (strs[j] != '\0')
		{
			total++;
			j++;
		}
		i++;
		j = 0;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	i = -1;
	if (size <= 0)
		tab = malloc(sizeof(char));
	else
		tab = malloc(sizeof(char) * (ft_len_strs(strs)
					+ ft_len_sep(sep) + size - 1));
	while (++i < size && size >= 1)
	{
		k = 0;
		while (strs[i][k] != '\0')
			tab[j++] = strs[i][k++];
		k = 0;
		while (sep[k] != '\0' && i < size - 1)
			tab[j++] = sep[k++];
	}
	tab[j] = '\0';
	return (tab);
}
