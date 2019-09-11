/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opendir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiffany_mab_ <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:57:19 by tiffany_m         #+#    #+#             */
/*   Updated: 2019/09/11 13:46:39 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"


void	ft_opendir(char	*path)
{
	DIR				*dir;
	struct	dirent	*dir_to;

	dir = opendir(path);
	while ((dir_to = readdir(dir)) != NULL)
	{
		printf("%s\n", dir_to->d_name);
	}
	closedir(dir);
}


