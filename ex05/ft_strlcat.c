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

// #include <stdio.h>

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
	int				retu;

	i = 0;
	y = 0;
	retu = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	while ((i < (size - 1)) && (src[y] != '\0') && (size != 0))
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (retu); 
}

/*int	main(void)
{
	char dest[] = {"123"};
	char src[] = {"def"};
	unsigned int size = 0;
	
	unsigned int res = {ft_strlcat(dest, src, size)};
	printf("%d", res);

	return(0);
}*/