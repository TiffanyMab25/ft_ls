/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opendir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiffany_mab_ <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:57:19 by tiffany_m         #+#    #+#             */
/*   Updated: 2019/09/11 14:22:00 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"


void	ft_opendir(char	*path)
{
	DIR				*filedir;
	struct	dirent	*dir_to;

	dir = opendir(path);
	while ((dir_to = readdir(filedir)) != NULL)
	{
		printf("%s\n", dir_to->d_name);
	}
	closedir(filedir);
}

/* gcc -Wall -Werror -Wextra opendir.c main.c
 * a.out .
 * With that being done it should open the content within the current directory
 * d_name is the size of the name within every directory [1024]
 * While reading content within the while loop print it out
 * Once one is done reading the directory it is always recommended that you close it just * like when one mallocs they always free their work */


