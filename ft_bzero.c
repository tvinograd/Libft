/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:22:13 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/16 15:59:27 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}

// int	main(void)
// {
// 	char	input[10];
// 	ft_bzero(input, 3);
// 	printf("%s\n", input);
//
// 	// Tested original function for edge case (NULL) - segfault:
//
// 	char	*s = NULL;
// 	bzero(s, 3);
// 	printf("%s\n", s);
//
// 	return (0);
// }
