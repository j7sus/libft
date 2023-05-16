/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:37:15 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:28:37 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/* ------------------------------------------------------------------------
  Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se
  inicializa con el contenido del parámetro ’content’. La variable ’next’,
  con NULL
  ------------------------------------------------------------------------ */
