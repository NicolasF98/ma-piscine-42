/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   our_ft.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sgomori <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 15:00:41 by sgomori      #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:29:22 by sgomori     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _OUR_FT_H
# define _OUR_FT_H
# include <unistd.h>
# include (les librairies pour le malloc, free, open, read et close)
int		char_to_int(char *int_in_char);
char	**ft_make_dict(char *dict_str);
void	ft_display_array(char **array);
void	ft_putchar(char c);
int		ft_char_to_int(char *inc);
void	ft_make_nbr(int nbr, char *dico[]);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
#endif
