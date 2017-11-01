/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:40:09 by tcabon            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:49 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static	void	ft_bol_set(t_boller *bol)
{
	bol->mand = 0;
	bol->jul = 0;
	bol->bur = 0;
	bol->other = 0;
	bol->ret = 0;
}

int				ft_check_error(int argc, char **argv)
{
	t_boller		*bol;
	unsigned int	i;

	i = 0;
	bol = (t_boller *)malloc(sizeof(t_boller));
	ft_bol_set(bol);
	if (argc >= 2)
	{
		while (argv[i])
		{
			ft_check_bol(argv[i], bol);
			if (bol->ret == 1)
			{
				free(bol);
				return (FALSE);
			}
			i++;
		}
	}
	free(bol);
	return (TRUE);
}
