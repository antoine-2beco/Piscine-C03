/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:43:44 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/13 11:53:12 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				y;

	y = 0;
	i = ft_strlen(dest);
	if ((size == 0) || (size == i))
		return (i + ft_strlen(src) + 1);
	while ((i < (size - 1)) && (src[y] != '\0') && (size != 0))
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + 1); 
}

/*int	main(void)
{
	char dest[] = {"dst"};
	char src[] = {"src"};
	unsigned int size = 5;
	
	unsigned int res = {ft_strlcat(dest, src, size)};
	printf("%d", res);

	return(0);
}*/