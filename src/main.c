/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:41:33 by tcabon            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:45 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_arg_error();
	if (ft_check_error(argc, argv + 1) == TRUE)
	{
		ft_init(argv + 1);
	}
	else
		ft_arg_error();
	return (0);
}
