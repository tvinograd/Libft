/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvinogra <tvinogra@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:08:17 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/19 23:25:22 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(char const *s, char c)
{
	int	i;
	int	str;

	if (!s)
		return (0);
	i = 0;
	str = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		str++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	start;
	int		str;

	if (!s)
		return (NULL);
	array = (char **)malloc((ft_strcount(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	str = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		len = i - start;
		array[str] = ft_substr(s, (unsigned int)start, len);
		if (!array[str])
		{
			while (str--)
				free(array[str]);
			free(array);
			return (NULL);
		}
		str++;
	}
	array[str] = NULL;
	return (array);
}

int	main(void)
{
	printf("%d\n", ft_strcount("Hello, my name is Tatiana ", ' '));
}
