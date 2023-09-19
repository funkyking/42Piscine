/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map0.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:15:23 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 13:45:19 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"
#include "map0.h"
#include "misc.h"
//cloning map(copy)
struct s_map_t	*map_clone(struct s_map_t *src)
{
	int r;
	int c;
	struct s_map_t *new_map;

	new_map = malloc(sizeof(struct s_map_t));
	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			(*new_map).values[r][c] = src->values[r][c];
			c++;
		}
		r++;
	}
	(*new_map).next = NULL;
	return (new_map);
}

void    map_show(struct s_map_t *map)
{
	int				r;
	int				c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			write(1, get_string((*map).values[r][c]), 1);
			if (c < 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			c++;
		}
		r++;
	}
}
//function that initiantes the solution program
void    solutions_init(struct s_solutions_t *solutions)
{
	(*solutions).first = NULL;
	(*solutions).last = NULL;
}
//a fuction that subjoins the solutions
void    solutions_append(struct s_solutions_t *solutions, struct s_map_t *map)
{
	if (NULL == (*solutions).first)
		(*solutions).first = map;
	if (NULL == (*solutions).last)
	{
		(*solutions).last = map;
	}
	else
	{
		(*solutions).last->next = map;
		(*solutions).last = map;
	}
}
