/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 23:01:23 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/26 00:09:28 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrv(char **strv)
{
	size_t	i;

	i = 0;
	while (strv[i])
		ft_putendl(strv[i++]);
}
