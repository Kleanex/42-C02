/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:20:59 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/24 08:50:06 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *stri, int i)
{
	i = -1;
	while (str [++i])
		ft_putchar(str[i]);
}

char	ft_putstr_with_non_printable (char *str)
{
	int i;

	if (str[i] == '\n')
		
	


}










#include <stdio.h>

int main (void)
{
	char str[]="Coucou\ntu vas bien ?";

	printf("%s", ft_putstr_non_printable(str));
	return (0);
}
