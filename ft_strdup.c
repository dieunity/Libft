/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihuynh <dihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:29:29 by dihuynh           #+#    #+#             */
/*   Updated: 2019/10/01 17:30:18 by dihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*res;
	int		len;

	i = 0;
	len = strlen(s1);
	res = (char*)malloc(sizeof(char) * (len +1));
	if (res == 0)
	{
		return(NULL);
	}
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	char *largestring = "Fo";
	char *smallstring = "Bardadfdafdadf";
	
	char *s;
	s = strcat(strdup(largestring), strdup(smallstring));
	printf("%s", s);
	return (0);
}