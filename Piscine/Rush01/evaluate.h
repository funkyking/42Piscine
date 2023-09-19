/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:14:46 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 13:43:01 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALUATE_H
# define EVALUATE_H

void	evaluate_possibility(unsigned int round, unsigned int *possibility, struct s_map_t *candidate, struct s_solutions_t *solutions);

void	evaluate_candidate(unsigned int round, unsigned int value, struct s_map_t *candidate, struct s_solutions_t *solutions);

#endif
