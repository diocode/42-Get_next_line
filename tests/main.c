/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:27:34 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/22 17:59:09 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(/*int ac, char **av*/)
{
  	int		fd1;
	//int		fd2;
	//int		fd3;

	//(void) ac;

	//if(*av[1] == '1')
	//{
		printf("%s\n", "-------------------- TEST -------------------");
		
		fd1 = open("tests/test2.txt", O_RDONLY);
		char *s = get_next_line(fd1);
		
		printf("%s", s);
		free(s);
	/*	s = get_next_line(fd1);
		printf("%s", s);
		free(s);
		s = get_next_line(fd1);
		printf("%s", s);
		free(s);

		close (fd1);
	}

	if (*av[1] == '2')
	{
		printf("%s\n", "-------------------- BONUS TEST -------------------");
		
		fd1 = open("tests/test1.txt", O_RDONLY);
		fd2 = open("tests/test2.txt", O_RDONLY);
		fd3 = open("tests/test3.txt", O_RDONLY);

		printf("%s\n", "======= FD1 =======");
		printf("%s\n", get_next_line(fd1));
		printf("%s\n", get_next_line(fd1));

		printf("%s\n", "======= FD2 =======");
		printf("%s\n", get_next_line(fd2));
		printf("%s\n", get_next_line(fd2));

		printf("%s\n", "======= FD1 =======");
		printf("%s\n", get_next_line(fd1));

		printf("%s\n", "======= FD2 =======");
		printf("%s\n", get_next_line(fd2));

		printf("%s\n", "======= FD1 =======");
		printf("%s\n", get_next_line(fd1));

		printf("%s\n", "======= FD2 =======");
		printf("%s\n", get_next_line(fd2));

		printf("\n%s\n", "======= FD3 =======");
		printf("%s\n", get_next_line(fd3));
		
		close(fd1);
		close(fd2);
		close(fd3);
	}
*/
	return (0);
}
