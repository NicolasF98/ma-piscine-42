/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_make_dict.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sgomori <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 21:40:55 by sgomori      #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:21:05 by sgomori     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ourft.h"

char	**ft_make_dict(char *dict_str)
{
	int array_i;
	int str_i;
	int	nb_keys;
	int line_len;
	char **dict_array;

	array_i = 0;
	str_i = 0;
	nb_keys = (ft_key_number(str_i) + 1);
	dict_array = malloc(sizeof(char*) * nb_keys);
	if (!dict_array)
		return (0);
	while (array_i < nb_keys)
	{
		line_len = (ft_line_len(dict_str, str_i, ' ', '\n') + 1);
		array_dict[array_i] = malloc (sizeof(char*) * line_len);
		if (!array_dict)
			return (0);
		array_dict[line_len] = 0;
		ft_fill_array(dict_array, array_i, dict_str, str_i);
		while (dict_str[str_i] != '\n' && dict_str[str_i] != '\0')
			str_i++;
		str_i++;
		line_len = 0;
		array_i++;
	}
	return (dict_array);
}

void	ft_fill_array(char **dict, int dict_i, char *key_val, int key_val_i)
{
	int i;
	int d;
	int kv;

	i = 0;
	d = dict_i;
	kv = key_val_i;
	while (key_val[kv] && key_val[kv] != '\n')
	{
		if (key_val[kv] == ' ')
			kv++;
		dict[d][i] = key_val[kv];
		i++;
		kv++;
	}
	dict[d][i] = '\0';
}

int		ft_key_number(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		ft_line_len(char *str, int current_i)
{
	int i;
	int count;

	i = curent_i;
	count = 0;
	while(str[i])
	{
		if ((str[i] == ' ' || str[i] == '\n'))
			count++;
		i++
	}
	return (i - count);
}
