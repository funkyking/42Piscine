/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:13:38 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 13:33:56 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"
#include "map1.h"
#include "map0.h"
#include "evaluate.h"
//all the possibilities for columes and rows starting with argument 1 up to 4
struct s_possibilities_t	g_possibilities[] = {
	{.count = 6, .values = {
			{4, 1, 2, 3},
			{4, 1, 3, 2},
			{4, 2, 1, 3},
			{4, 2, 3, 1},
			{4, 3, 1, 2},
			{4, 3, 2, 1}
		}
	},
	{.count = 11, .values = {
			{1, 4, 2, 3},
			{1, 4, 3, 2},
			{2, 1, 4, 3},
			{2, 4, 1, 3},
			{2, 4, 3, 1},
			{3, 1, 2, 4},
			{3, 1, 4, 2},
			{3, 2, 1, 4},
			{3, 2, 4, 1},
			{3, 4, 1, 2},
			{3, 4, 2, 1}
		}
	},
	{.count = 6, .values = {
			{1, 2, 4, 3},
			{1, 3, 2, 4},
			{1, 3, 4, 2},
			{2, 1, 3, 4},
			{2, 3, 1, 4},
			{2, 3, 4, 1},
		}
	},
	{.count = 1, .values = {
			{1, 2, 3, 4},
		}
	}
};
//we return 0 if it does not accept the possibility.
void	evaluate_possibility(unsigned int round, unsigned int *possibility, struct s_map_t *candidate, struct s_solutions_t *solutions)
{
	int				i;
	unsigned int	section[4];
	struct s_map_t	*new_candidate;

	map_get_section(candidate, round, section);
	i = 0;
	while (i < 4)
	{
		if ((0 != section[i]) && (section[i] != possibility[i]))
			return ;
		i++;
	}
	new_candidate = map_clone(candidate);
	map_update_section(new_candidate, round, possibility);
	solutions_append(solutions, new_candidate);
}

void	evaluate_candidate(unsigned int round, unsigned int value, struct s_map_t *candidate, struct s_solutions_t *solutions)
{
	unsigned int			p;

	p = 0;
	while (p < g_possibilities[value - 1].count)
	{
		evaluate_possibility(round, g_possibilities[value - 1].values[p],
			candidate, solutions);
		p++;
	}
}
