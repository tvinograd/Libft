/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:50:41 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/16 15:57:16 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}

// int	main(void)
// {
// 	char	input[10];
// 	ft_memset(input, 'A', 3);
// 	input[3] = '\0';
// 	printf("%s\n", input);
// 
// 	// Tested original function for edge case (NULL) - segfault:
// 
// 	char	*b = NULL;
// 	memset(b, 'A', 3);
// 	printf("%s\n", b);
// 
// 	return (0);
// }
