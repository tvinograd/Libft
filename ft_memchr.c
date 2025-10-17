/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:03:20 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/17 22:15:49 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;

	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", (char *)ft_memchr("Hello, my name is Tatiana", 'm', 13));
// 	return (0);
// }
