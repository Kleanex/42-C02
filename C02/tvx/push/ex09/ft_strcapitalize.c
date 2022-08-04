/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:44:22 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/25 17:44:31 by dosteine         ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		lowcase(str, i);
		while (str[i] < '0' || str[i] > 'z' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i - 1] == '/'))
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			while ((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'a' && str[i] <= 'z'))
				i++;
		}
		else
		{
			upcase(str, i);
			while (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				i++;
		}		
	i++;
	}
	return (str);
}
