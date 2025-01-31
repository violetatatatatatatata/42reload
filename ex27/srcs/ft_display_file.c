/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:41:47 by avelandr          #+#    #+#             */
/*   Updated: 2024/12/30 12:44:06 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_error(const char *msg, int len)
{
	write(2, msg, len);
}

void	display_file(int fd)
{
	char	buffer[4096];
	int		bytes_read;

	while (1)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read <= 0)
			break ;
		write(1, buffer, bytes_read);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		display_error("File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		display_error("Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error("Cannot read file.\n", 18);
		return (1);
	}
	display_file(fd);
	close(fd);
	return (0);
}
