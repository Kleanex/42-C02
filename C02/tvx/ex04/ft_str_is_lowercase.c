/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:10:25 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/20 09:10:32 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
		i++;
	j = 0;
	while (str[j] >= 'a' && str[j] <= 'z')
		j++;
	if (j == i)
		return (0);
	else
		return (1);
}
