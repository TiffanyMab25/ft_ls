/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:12:34 by tmabunda          #+#    #+#             */
/*   Updated: 2019/09/16 16:00:20 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	checkflag(char **str)
{
	int i = 1;

	while(str[i] != NULL)
	{
		if(str[i][0] != '-')
			break;
		if(str[i][0] == '-')
			return(1);
		i++;
	}
	return(0);
}

/** The purpose of this function is to check if theres '-'
 * the reason we initialize i to 1 is that we want to start checking from argument 1
 * the while statement checks if the string isnt empty and breaks
 * the if statments tells us that every first argument character should be '-'
 *  if its true you return 1 and if not you return 0 
 */ 
 
