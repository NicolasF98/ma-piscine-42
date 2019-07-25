/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nfournou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 20:56:47 by nfournou     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/08 15:40:14 by nfournou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_a(char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	return (0);
}

int		ft_n(char letter)
{
	if (letter >= '0' && letter <= '9')
	{
		return (1);
	}
	return (0);
}

void	ft_cap(char *ch)
{
	*ch -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		ft_cap(&str[i]);
		i++;
	}
	while (str[i])
	{
		if (ft_a(str[i]) && (ft_n(str[i - 1]) == 0) && (ft_a(str[i - 1]) == 0))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				ft_cap(&str[i]);
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
