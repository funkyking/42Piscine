/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:20:29 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 14:00:00 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"
#include "map0.h"
#include "map1.h"
#include "evaluate.h"
//Go over all the possibility, creating new viable posibilities, after applying the round value.
void	solve_round(unsigned int round, unsigned int value, struct s_solutions_t *candidates, struct s_solutions_t *solutions)
{
	struct s_map_t *candidate;
	struct s_map_t *next_candidate;

	candidate = candidates->first;
	while (candidate != NULL && ((next_candidate = candidate->next) || 1))
	{
		evaluate_candidate(round, value, candidate, solutions);
		free(candidate);
		candidate = next_candidate;
	}
}
//Returns NULL if there are no viable posibility, exits and then goes over the possibilities again. In the end, it returns the first viable solution.
struct s_map_t	*solve(struct s_conditions_t *conds)
{
	struct s_solutions_t candidates;
	struct s_solutions_t solutions;
	struct s_map_t *initial_map;
	unsigned int r;

	initial_map = malloc(sizeof(struct s_map_t));
	map_init(initial_map);
	solutions_init(&candidates);
	solutions_append(&candidates, initial_map);
	r = 0;
	while (r < 16)
	{
		solutions_init(&solutions);
		solve_round(r, conds->values[r], &candidates, &solutions);
		if (solutions.first == NULL)
			return (NULL);
		candidates = solutions;
		r++;
	}
	return (solutions.first);
}
//analyzing and converting the program into an internal format
void    parse_conditions(char *cmdline, struct s_conditions_t *conds)
{
	int								i;
	int								j;

	i = 0;
	j = 0;
	while ((cmdline[i] >= '0' && cmdline[i] <= '9') || cmdline[i] == ' ')
	{
		if (cmdline[i] >= '0' && cmdline[i] <= '9')
		{
			(*conds).values[j] = cmdline[i] - '0';
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	struct s_conditions_t			conds;
	struct s_map_t					*solution;

	if (argv[1][31] != '\0')
	{
		write(1, "Error\n", 6);
		return (1);
	}
	parse_conditions(argv[1], &conds);
	(void)argc;
	solution = solve(&conds);
	if (solution == NULL || argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	map_show(solution);
	return (0);
}
