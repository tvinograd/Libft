/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:41:06 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/16 13:06:54 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	input[] = "Hello";
// 	printf("%d\n", ft_strlen(input));
//
// 	char 	*p = NULL;
// 	printf("%d\n", ft_strlen(p));
// }
