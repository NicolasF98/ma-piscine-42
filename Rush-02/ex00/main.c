#include "ourft.h"

int		main(int argc, char **argv)
{
	int file;
	int file_closed;
	int nb_char;
	char **our_dict;
	char dict_buffer[5000] = {'\0'};

	if (argc != 2)
		return (0);
	file = open(argv[1], O_RDWR);	
	nb_char = read(file, dict_str_buffer, 350);
	dict_buffer[nb_char] = '\n';
	dict_buffer[(nb_char + 1)] = '\0';
	file_closed = close(file);
	our_dict = ft_make_dict(dict_buffer);
	ft_display_array(our_dict);
	return (0);
}
