/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:26:12 by avelandr          #+#    #+#             */
/*   Updated: 2024/12/30 11:59:20 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
		return (NULL);
	str = malloc((max - min) * sizeof(int));
	if (!str)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
/*
int main() {
    int min = 1;
    int max = 10;
    int *range = ft_range(min, max);

    if (range == NULL) {
        printf("Error al crear el rango\n");
        return 1;
    }

    printf("Rango de %d a %d:\n", min, max);
    for (int i = 0; i < max - min; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range); // No olvides liberar la memoria

    return 0;
}
*/
