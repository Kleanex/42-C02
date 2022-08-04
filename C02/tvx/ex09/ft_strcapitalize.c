/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:44:22 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/24 08:13:23 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

void	lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	upcase (str, i);
	while (str[i + 1])
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 63)
			|| (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123
				&& str[i] <= 126))
			upcase (str, i + 1);
		else
			lowcase (str, i + 1);
		i++;
	}
	return (str);
}
