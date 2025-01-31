/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:52:22 by avelandr          #+#    #+#             */
/*   Updated: 2024/12/30 12:00:02 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		src_size(char *src);
char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*cpy;
	char	*aux;

	cpy = malloc(src_size(src) * sizeof(char));
	if (!cpy)
		return (NULL);
	aux = cpy;
	while (*src != '\0')
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = '\0';
	return (aux);
}

int	src_size(char *src)
{
	int		size;
	char	*a;

	a = src;
	size = 0;
	while (*a != '\0')
	{
		a++;
		size++;
	}
	return (size);
}

/*
int main() 
{
    char *src = "Hola, mundo!";
    char *cpy = ft_strdup(src);

    if (cpy == NULL) {
        printf("Error al duplicar la cadena\n");
        return 1;
    }
    printf("Cadena original: %s\n", src);
    printf("Cadena duplicada: %s\n", cpy);
   
    free(cpy);
    return 0;
}
*/
