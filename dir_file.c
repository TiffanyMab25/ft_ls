/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 09:04:43 by tmabunda          #+#    #+#             */
/*   Updated: 2019/09/16 14:01:58 by tmabunda         ###   ########.fr       */
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

	/** this function checks if you have encountered a file or directory
	 *the stuct stat buf size is giving you an allies
	 * the stat gives you properties into the buf through the buff
	 * the buff has the struct stat structure
	 * S_ISDIR of the s_mode will tell you if its a file/directory this is accessed internally 
	 * We return 1 if its a directory and 0 if its a file 
	 */
