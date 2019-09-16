/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permission.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:33:20 by tmabunda          #+#    #+#             */
/*   Updated: 2019/09/16 15:40:10 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_permissions(struct stat buf)
{

	ft_putstr( (S_ISDIR(buf.st_mode)) ? "d" : "-");  /*  the "d" tells you if its a directory and "-" if its a file */
	ft_putstr( (buf.st_mode & S_IRUSR) ? "r" : "-"); /* the user can read the  directory / its a file */
	ft_putstr( (buf.st_mode & S_IWUSR) ? "w" : "-"); /* the user can write on the directory / its file */
	ft_putstr( (buf.st_mode & S_IXUSR) ? "x" : "-"); /* the user can execute the diretory/ its a file */
	ft_putstr( (buf.st_mode & S_IRGRP) ? "r" : "-"); /* the group can read the directory/ its a file and */
	ft_putstr( (buf.st_mode & S_IWGRP) ? "w" : "-"); /* the group can write on the directory/ its a file */
	ft_putstr( (buf.st_mode & S_IXGRP) ? "x" : "-"); /* the group can execute the directory/ its a file */
	ft_putstr( (buf.st_mode & S_IROTH) ? "r" : "-"); /* others besides ther group/user can read the directory / its a file */
	ft_putstr( (buf.st_mode & S_IWOTH) ? "w" : "-"); /* others besides the group/user can write on the directory / its a file */
	ft_putstr( (buf.st_mode & S_IXOTH) ? "x" : "-"); /* Others besides the group/user can execute the directory/ its a file */ 
}

int main(int ac, char **av)
{
	int i = 1;
	struct stat buf;

	if(ac == 2)
	{
		stat(av[1], &buf);
		ft_permissions(buf);
	}
return(0);
}
