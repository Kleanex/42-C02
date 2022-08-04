/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:17:22 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/26 13:26:37 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

static int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int		mot;
	char	*old_str;

	old_str = str;
	mot = 0;
	while (*str != '\0')
	{
		if (is_digit(*str))
			mot = 1;
		else if (is_alpha(*str))
		{
			if (mot)
			{
				if (*str <= 'Z')
					*str += 'a' - 'A';
			}
			else if (*str >= 'a')
				*str += 'A' - 'a';
			mot = 1;
		}
		else
			mot = 0;
		str++;
	}
	return (old_str);
}
