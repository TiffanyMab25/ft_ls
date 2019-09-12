/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiffany_mab_ <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:17:03 by tiffany_m         #+#    #+#             */
/*   Updated: 2019/09/12 14:05:45 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

                                                           

#ifndef FT_LS_H
#define FT_LS_H

# include "libft/libft.h"
# include <dirent.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/stat.h>

void	ft_opendir(char *path);
char	checkflag(int argc, char **argv);

#endif

