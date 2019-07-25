/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_numbers.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lfourage <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 17:59:41 by lfourage     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 22:59:58 by lfourage    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ourft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display_numbers(int nb_to_convert)
{
	if (nb_to_convert not yet an index in current .dict)
		//build number by deconstructing the number, parsing the .dict,
		//then create and display the string
	else if (nb_to_convert has an index)
		// display string at index nb_to_convert
	return (1);
}

void	display_numbers_fr(int nb_to_convert)
{
	if (nb_to_convert not yet an index in current .dict)	
		//build number by deconstructing the number, parsing the .dict,
		//then create and display the string
	else if (nb_to_convert has an index)
		// display string at index nb_to_convert
	return (1);
}

int		display_numbers_es(int nb_to_convert)
{
	if (nb_to_convert not yet an index in current .dict)
		//build number by deconstructing the number, parsing the .dict,
		//then create and display the string
	else if (nb_to_convert has an index)
		//display string at index nb_to_convert
	return (1);
}

int		dict_lang(char *lang, int nb_to_convert)
{
	if(lang == "numbers.dict")
		return (display_numbers(nb_to_convert));
	else if(lang == "numbers_fr.dict")
		return (display_numbers_fr(nb_to_convert));
	else if(lang == "numbers_es.dict")
		return (display_numbers_es(nb_to_convert));
}
