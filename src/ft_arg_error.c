/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:39:35 by tcabon            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:51 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_arg_error(void)
{
	ft_putendl("Illegal usage of program !");
	ft_putstr("Use : ./fractol [mandelbrot, julia, burning] (You can launch");
	ft_putendl(" several fractals, but you can't launch the same two times.)");
	exit(1);
}
