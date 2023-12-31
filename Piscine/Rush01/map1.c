/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:18:10 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 13:49:33 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"
#include "map1.h"
//Reads the colums and then the rows rows. From left to right, else, right to left
void	map_get_section2(struct s_map_t *map, unsigned int round, unsigned int *values)
{
	if (round < 12)
	{
		values[0] = (*map).values[round - 8][0];
		values[1] = (*map).values[round - 8][1];
		values[2] = (*map).values[round - 8][2];
		values[3] = (*map).values[round - 8][3];
	}
	else
	{
		values[0] = (*map).values[round - 12][3];
		values[1] = (*map).values[round - 12][2];
		values[2] = (*map).values[round - 12][1];
		values[3] = (*map).values[round - 12][0];
	}
}
//Reads the colums and then the rows colums. From top to bottom, else, bottom to top
void	map_get_section(struct s_map_t *map, unsigned int round, unsigned int *values)
{
	if (round < 8)
	{
		if (round < 4)
		{
			values[0] = (*map).values[0][round];
			values[1] = (*map).values[1][round];
			values[2] = (*map).values[2][round];
			values[3] = (*map).values[3][round];
		}
		else
		{
			values[0] = (*map).values[3][round - 4];
			values[1] = (*map).values[2][round - 4];
			values[2] = (*map).values[1][round - 4];
			values[3] = (*map).values[0][round - 4];
		}
	}
	else
	{
		map_get_section2(map, round, values);
	}
}
//Reads the colums and then the rows rows. From left to right, else, right to left
void	map_update_section2(struct s_map_t *map, unsigned int round, unsigned int *values)
{
	if (round < 12)
	{
		(*map).values[round - 8][0] = values[0];
		(*map).values[round - 8][1] = values[1];
		(*map).values[round - 8][2] = values[2];
		(*map).values[round - 8][3] = values[3];
	}
	else
	{
		(*map).values[round - 12][3] = values[0];
		(*map).values[round - 12][2] = values[1];
		(*map).values[round - 12][1] = values[2];
		(*map).values[round - 12][0] = values[3];
	}
}
//Reads the colums and then the rows colums. From top to bottom, else, bottom to top
void	map_update_section(struct s_map_t *map, unsigned int round, unsigned int *values)
{
	if (round < 8)
	{
		if (round < 4)
		{
			(*map).values[0][round] = values[0];
			(*map).values[1][round] = values[1];
			(*map).values[2][round] = values[2];
			(*map).values[3][round] = values[3];
		}
		else
		{
			(*map).values[3][round - 4] = values[0];
			(*map).values[2][round - 4] = values[1];
			(*map).values[1][round - 4] = values[2];
			(*map).values[0][round - 4] = values[3];
		}
	}
	else
		map_update_section2(map, round, values);
}
//Initializing map
void    map_init(struct s_map_t *map)
{
	int		r;
	int		c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			(*map).values[r][c] = 0;
			c++;
		}
		r++;
	}
	(*map).next = NULL;
}
