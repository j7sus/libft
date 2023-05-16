/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:22:19 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:45:53 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}

/* --------------------------------------------------------------------- 
 Esta funcion anade el nodo 'new' al final de la lista 'lst. La funcion	
 trabaja en forma recursiva. Si la lista no esta al final vuelve a pasar 	
 pero con el siguiente valor de la lista 									
 ----------------------------------------------------------------------- */
