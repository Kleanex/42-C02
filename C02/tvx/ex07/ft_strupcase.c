/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:21:52 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/25 15:55:45 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		while ((str[j] > 31 && str[j] <= 96) && (str[j] > 122 && str[j] < 127))
			str[j] = str[j];
		while (str[j] >= 90 && str[j] <= 122)
			str[j] = str[j] -32;
	j++;
	}
	return (str);
}
