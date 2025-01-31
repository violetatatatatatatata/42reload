/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:13:30 by avelandr          #+#    #+#             */
/*   Updated: 2025/01/02 12:04:15 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	retorna_uno;

	i = 0;
	retorna_uno = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			retorna_uno++;
		i++;
	}
	return (retorna_uno);
}
