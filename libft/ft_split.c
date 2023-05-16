/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:47:58 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/24 18:21:06 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	count;
	int	num_words;

	count = 0;
	num_words = 0;
	while (str[count])
	{
		if (count == 0 && str[count] != c)
			num_words++;
		if (count > 0 && str[count] != c && str[count - 1] == c)
			num_words++;
		count++;
	}
	return (num_words);
}

char	**myfree(char **matrix, int j)
{
	j--;
	while (j >= 0)
	{
		free(matrix[j]);
		j--;
	}
	free(matrix);
	return (NULL);
}

char	*cortar_palabra(const char *s, int start, int end)
{
	int		len;
	int		count;
	char	*result;
	int		j;

	j = 0;
	count = 0;
	len = end - start + 1;
	while (count < start)
		count++;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (count <= end)
		result[j++] = s[count++];
	result[j] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		num_word;
	int		start;

	matrix = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	num_word = 0;
	start = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			matrix[num_word] = cortar_palabra(s, start, i);
			if (!matrix[num_word++])
				return (myfree(matrix, num_word));
		}
		i++;
	}
	matrix[num_word] = NULL;
	return (matrix);
}

/*
int	main()
{
	char	**matrix;
	int	 i;
	//				   0123456789 12345678
	//matrix = ft_split("fa respuesta es: 42", ' ');
	matrix = ft_split("lorem ipsum dolor sit amet, consectetur ad", ' ');
	printf("NULL: %d\n",matrix[i] == NULL);
	printf("pointer: %p\n",matrix[i]);
	i = 0;
	while (matrix[i] != NULL)
	{
	printf("matrix[%d] = |%s|\n", i, matrix[i]);
	i++;
	}
	return (0);
}*/
/* -------------------------------------------------------------------------
   La funcion 'split' interara siempre que es posible separar una string 's' 
   mediante un caracter separador 'c' que es pasado como parametro. la string
   se guardara en un array de dos dimensiones como msu fuera una lista.		 
  																			 
   1. Saber el numero de palabras. 											 
   2. Saber el 'len' de cada palabra. 										 
   3. Alocar un bloque de memoria (n words + 1) que apuntara a otro bloque e 
   de memoria. 																 
   4. Alocar otro bloque de memoria. 										 
   5. Rellenar la tabla com palabras. 										 
   ------------------------------------------------------------------------ */
