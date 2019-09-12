/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 09:04:43 by tmabunda          #+#    #+#             */
/*   Updated: 2019/09/12 14:18:17 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	dir_file(const char *path)
{

	struct	stat buf;
	stat(path, &buf);

	if (S_ISDIR (buf.st_mode))
		return(1);
	else
		return(0);
}

	/*this function checks if you have encountered a file or directory
	 * 
	 * */
