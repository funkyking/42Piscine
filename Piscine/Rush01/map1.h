/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:18:49 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 13:53:58 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP1_H
# define MAP1_H
//Reads the colums and then the rows rows - left to right else right to left
void	map_get_section2(struct s_map_t *map, unsigned int round, unsigned int *values);

//Reads the colums and then the rows colums - top to bottom, else, bottom to top
void	map_get_section(struct s_map_t *map, unsigned int round, unsigned int *values);

//reads the colums and then the rows rows - left to right, else, right to left
void	map_update_section2(struct s_map_t *map, unsigned int round, unsigned int *values);

//Reads the colums and then the rows colums - top to bottom, else, bottom to top
void	map_update_section(struct s_map_t *map, unsigned int round, unsigned int *values);

void	map_init(struct s_map_t *map);

#endif
