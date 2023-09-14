/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:41:44 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/13 11:53:12 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1); 
		i++;
	}
	if (i == (n))
		return (0);
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
/*
int main(void)
{
    char s1[] = {"abce"};
    char s2[] = {"abe"};
	unsigned int n = 0;
    char res = 0;

    res = ft_strncmp(s1, s2, n);
    printf("%d", res);
    return (0);
}
*/