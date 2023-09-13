/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:41:44 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/13 11:53:12 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[y] != '\0') && (y < nb))
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest); 
}

/*int main(void)
{
	char src[] = "World";
	char dest[7] = "Hello ";
	unsigned int n = 3;
	char *res[] = {ft_strncat(dest, src, n)};

	printf("%s", *res);
}
*/