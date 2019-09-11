/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:12:34 by tmabunda          #+#    #+#             */
/*   Updated: 2019/09/11 14:39:24 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	checkflag(char **c)
{
	int i = 1;

	while(c[i] != NULL)
	{
		if(c[i][0] != '-')
			break;
		if(c[i][0] == '-')
			return(1);
		i++;
	}
	return(0);
}

/* The purpose of this function is to check if theres - 
 
