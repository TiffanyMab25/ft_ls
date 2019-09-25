/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validateflag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:26:29 by tmabunda          #+#    #+#             */
/*   Updated: 2019/09/25 08:09:25 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if theres any flad after the - */

#include "ft_ls.h"

int	ft_arrlen(char **arr)
{
	int	len;

	i = 0;
	while (arr[len] != NULL)
		lenn++;
	return (len);
}

/* This fuction looks for the length of the string */

void	ft_validateflag(int argc, char **argv, t_flags *m_flags)
{
	int	i;
	int	j;
	m_flags->l_flag = 0;
	m_flags->a_flag = 0;
	m_flags->r_flag = 0;
	m_flags->t_flag = 0;
	m_flags->cr_flag = 0;

	i = 1;
	if (ft_checkflags(argc, argv))
	{
		while (argv[i])
		{
			j = 1;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] == 'l')
					m_flags->l_flag = 1;
				else if (argv[i][j] == 'a')
					m_flags->a_flag = 1;
				else if (argv[i][j] == 'r')
					m_flags->r_flag = 1;
				else if (argv[i][j] == 't')
					m_flags->t_flag = 1;
				else if (argv[i][j] == 'R')
					m_flags->cr_flag = 1;
				j++;
			}
			i++;
		}
	}
}

/** 
