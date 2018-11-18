/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freemap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 22:39:51 by ale-goff          #+#    #+#             */
/*   Updated: 2018/10/24 22:40:08 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freemap(char **arr, int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
