/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:50:41 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/16 13:06:45 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	if (b == NULL)
		return (b);
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

// 	char	*b = NULL;
// 	ft_memset(b, 'A', 3);
// 	printf("%s\n", b);

// 	return (0);
// }
