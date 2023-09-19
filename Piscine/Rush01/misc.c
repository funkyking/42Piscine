/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowang <yowang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:19:40 by yowang            #+#    #+#             */
/*   Updated: 2022/04/17 13:55:42 by yowang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "misc.h"

const char	*get_string(unsigned int value)
{
	if (value == 0)
		return ("0");
	else if (value == 1)
		return ("1");
	else if (value == 2)
		return ("2");
	else if (value == 3)
		return ("3");
	else if (value == 4)
		return ("4");
	else
		return ("U");
}
