/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:20:44 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/13 11:53:12 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + y] == to_find[y])
		{
			y ++;
			if (to_find[y] == '\0')
				return (str + i);
		}
		y = 0;
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	char str[] = {"caaxxxxadbxxadbxxxab"};
	char to_find[] = {"ab"};
	char *res[] = {ft_strstr(str, to_find)};

	printf("%s", *res);
}*/