/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvinogra <tvinogra@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:56:37 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/19 11:57:29 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	if (ft_strlen(s) < start)
		return (NULL);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (len-- && s[start])
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// // start is defined as being within 's',
// // therefore start >= ft_strlen(s) is undefined and I can return NULL

// int	main(void)
// {
// 	char const		*s = "Hello, my name is Tatiana";
// 	unsigned int	start = 7;
// 	size_t			len = 7;
// 	char			*sub;

// 	sub = ft_substr(s, start, len);
// 	printf("%s\n", sub);
// 	free(sub);
// 	return (0);
// }
