/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:41:06 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/16 15:57:09 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	{
// 	char	input[] = "Hello";
// 	printf("mine: %d\n", ft_strlen(input));
// 	}
// 
// 	{
// 	char	input[] = "Hello";
// 	printf("orig: %lu\n", strlen(input));
// 	}
// 
// 	// Tested original function for edge case (NULL) - segfault:
// 	char 	*p = NULL;
// 	printf("%lu\n", strlen(p));
// }
