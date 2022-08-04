/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 06:43:00 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/23 16:09:54 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str [i] != '\0')
		i++;
	j = 0;
	while (str[j] >= '0' && str[j] <= '9')
		j++;
	if (j == i)
		return (1);
	else
		return (0);
}
