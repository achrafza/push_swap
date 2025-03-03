/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:12:38 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:14 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len_s;
	size_t		i;
	char		*s1;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s || (len == 0))
		return (ft_strdup(""));
	i = 0;
	if (len > len_s - start)
		len = len_s - start;
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[i + start];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc((ft_strlen(s1) + 1) * (sizeof(char)));
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
