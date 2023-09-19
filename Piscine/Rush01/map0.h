/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map0.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:15:56 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 13:46:39 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP0_H
# define MAP0_H

struct  s_map_t *map_clone(struct s_map_t *src);

void    map_show(struct s_map_t *map);

void    solutions_init(struct s_solutions_t *solutions);

void    solutions_append(struct s_solutions_t *solutions, struct s_map_t *map);

#endif
