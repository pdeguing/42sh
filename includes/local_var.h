/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   local_var.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acakste <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 08:28:17 by acakste           #+#    #+#             */
/*   Updated: 2018/11/19 08:28:19 by acakste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOCAL_VAR_H
# define LOCAL_VAR_H
# define NUM_SLOTS 20
# include <ft_sh.h>
# include <structs.h>

/*
**	local_var/assigments.c
*/
int				store_assignments(t_assign *lst);

/*
**	local_var/local_var.c
*/
t_var			*find_lst(char *key);
t_var			*create_var_elem(char *key, char *value);
int				rm_local_var(char *key);
int				store_local_var(char *key, char *value);

void			init_local_var();

/*
**	local_var/local_var_comp.c
*/
unsigned long	hash_var(char *key);
char			*get_local_var(char *key);
t_var			*rm_local_var_inst(t_var *cur, char *key);

#endif
