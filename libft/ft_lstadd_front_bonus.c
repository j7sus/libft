/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:40:48 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:44:28 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* --------------------------------------------------------------------------
  La funcion lstadd_front añade el nodo 'new' al principio de la lista 'lst'
  lst  la dirección de un puntero al primer nodo de una lista. new: un 
  puntero al nodo que añadir al principio de la lista
 -------------------------------------------------------------------------- */
