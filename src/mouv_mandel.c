/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv_mandel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:42:20 by tcabon            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:42 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		mouv_up_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->ymax - mlx->limit_mandel->ymin) / 10;
	mlx->limit_mandel->ymin -= decal;
	mlx->limit_mandel->ymax -= decal;
}

void		mouv_down_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->ymax - mlx->limit_mandel->ymin) / 10;
	mlx->limit_mandel->ymin += decal;
	mlx->limit_mandel->ymax += decal;
}

void		mouv_left_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->xmax - mlx->limit_mandel->xmin) / 10;
	mlx->limit_mandel->xmin -= decal;
	mlx->limit_mandel->xmax -= decal;
}

void		mouv_right_mandel(t_mlx *mlx)
{
	double decal;

	decal = (mlx->limit_mandel->xmax - mlx->limit_mandel->xmin) / 10;
	mlx->limit_mandel->xmin += decal;
	mlx->limit_mandel->xmax += decal;
}
