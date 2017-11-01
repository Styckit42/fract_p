/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:42:26 by tcabon            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:42 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	reinit_julia(t_mlx *mlx)
{
	mlx->point_julia->zr = 0;
	mlx->point_julia->zi = 0;
	mlx->point_julia->x = 0;
	mlx->point_julia->y = 0;
}

void	reinit_mandel(t_mlx *mlx)
{
	mlx->point_mandel->cr = 0;
	mlx->point_mandel->ci = 0;
	mlx->point_mandel->zr = 0;
	mlx->point_mandel->zi = 0;
	mlx->point_mandel->x = 0;
	mlx->point_mandel->y = 0;
}

void	reinit_burning(t_mlx *mlx)
{
	mlx->point_burning->cr = 0;
	mlx->point_burning->ci = 0;
	mlx->point_burning->zr = 0;
	mlx->point_burning->zi = 0;
	mlx->point_burning->x = 0;
	mlx->point_burning->y = 0;
}
