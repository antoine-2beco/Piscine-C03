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

/*#include <stdio.h>
#include <string.h>*/

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
	unsigned int	dest_len;

	y = 0;
	dest_len = ft_strlen(dest);
	i = dest_len;
	while ((i < (size - 1)) && (src[y] != '\0') && (size != 0))
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	if ((size < 3) && (src[0] == '\0'))
		return (size);
	if (size < i)
		return (dest_len + size);
	return (dest_len + ft_strlen(src)); 
}

/*int	main(void)
{
	char dest[] = "";
	char ft_dest[100] = "";
	char src[] = {"src"};
	unsigned int size = 0;
	
	unsigned int res = {ft_strlcat(dest, src, size)};
	printf("%d\n", res);
	printf("%lu", strlcat(ft_dest, src, size));
	return(0);
}*/

/*
Before :                || After :
dst   | src   | size    || dst      | return
------------------------||--------------------
dst\0 | src\0 | 0       || dst\0    | 3
dst\0 | src\0 | 1       || dst\0    | 4
dst\0 | src\0 | 2       || dst\0    | 5
dst\0 | src\0 | 3       || dst\0    | 6
dst\0 | src\0 | 4       || dst\0    | 6
dst\0 | src\0 | 5       || dsts\0   | 6
dst\0 | src\0 | 6       || dstsr\0  | 6
dst\0 | src\0 | 7       || dstsrc\0 | 6
dst\0 | src\0 | 8       || dstsrc\0 | 6
*/