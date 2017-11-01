/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   motion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:41:48 by tcabon            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:44 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			motion_julia(int x, int y, t_mlx *mlx)
{
	static		int prex;
	static		int prey;

	if (mlx->bonus_julia->locked == TRUE)
		return (0);
	if (ft_absolute_nb(x - prex) < 4 || ft_absolute_nb(y - prey) < 4)
		return (1);
	prey = y;
	prex = x;
	mlx->point_julia->cr = x / mlx->limit_julia->coeffx +
		mlx->limit_julia->xmin;
	mlx->point_julia->ci = (y / mlx->limit_julia->coeffy +
		mlx->limit_julia->ymin);
	expose_julia(mlx);
	return (1);
}
