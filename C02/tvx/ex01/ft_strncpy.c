/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:01:11 by dosteine          #+#    #+#             */
/*   Updated: 2022/07/25 13:52:05 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	

	if ( dest[i] > src[n])
		dest[i+'\0'] = src[i];

	return (dest);
}
	

#include <stdio.h>

int	main(void)
{
	char	dest[25];
	char	*src;

	src = "A Angouleme.";
	ft_strncpy(dest,src, 15);
	printf("%s", dest);
}
