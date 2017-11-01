/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_help.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 18:41:26 by tcabon            #+#    #+#             */
/*   Updated: 2016/09/14 20:45:46 by tcabon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		key_burning_help(int keycode, t_mlx *mlx)
{
	if (keycode == H)
	{
		mlx_clear_window(mlx->mlx_ptr, mlx->bonus_burning->win_help);
		mlx_destroy_window(mlx->mlx_ptr, mlx->bonus_burning->win_help);
		mlx->bonus_burning->help = 0;
	}
	if (keycode == ECHAP)
		close_prog(mlx);
	return (0);
}

int		key_julia_help(int keycode, t_mlx *mlx)
{
	if (keycode == H)
	{
		mlx_clear_window(mlx->mlx_ptr, mlx->bonus_julia->win_help);
		mlx_destroy_window(mlx->mlx_ptr, mlx->bonus_julia->win_help);
		mlx->bonus_julia->help = 0;
	}
	if (keycode == ECHAP)
		close_prog(mlx);
	return (0);
}

int		key_mandel_help(int keycode, t_mlx *mlx)
{
	if (keycode == H)
	{
		mlx_clear_window(mlx->mlx_ptr, mlx->bonus_mandel->win_help);
		mlx_destroy_window(mlx->mlx_ptr, mlx->bonus_mandel->win_help);
		mlx->bonus_mandel->help = 0;
	}
	if (keycode == ECHAP)
		close_prog(mlx);
	return (0);
}
