/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:02:46 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:30:25 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		tmp = f (lst->content);
		new_elem = ft_lstnew(tmp);
		if (!new_elem)
		{
			del(tmp);
			ft_lstclear(&new_lst, del);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

/* -----------------------------------------------------------------------
 La funcion reccorre la lista 'lst' iterando creamos una nueva lista 
 aplicamos la funcion 'f' dada como parametro en cada nodo. 				    
 
 Creamos una lista resultante de la aplicacion de la funcion 'f' sobre    
 cada nodo. Utilizamos la funcion 'del' para eliminar el contenido de 	
 cada nodo y por ultimo devolvemos la lista creada 						
 ----------------------------------------------------------------------- */
