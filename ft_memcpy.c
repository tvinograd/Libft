/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:13:58 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/16 16:45:55 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

// int	main(void)
// {
// 	{
// 	char	src[] = "I love";
// 	char	dst[] = "I hate programming";
// 	void *d = ft_memcpy(dst, src, 6);
// 	printf("dst mine: %s\n", dst);
// 	}
//
// 	{
// 	char	src[] = "I love";
// 	char	dst[] = "I hate programming";
// 	void *d = memcpy(dst, src, 6);
// 	printf("dst orig: %s\n", dst);
// 	}
//
// // Tested original function for edge case (NULL) - segfault:
//
// 	{
// 	char	src[] = "I love";
// 	char	*dst = NULL;
// 	void *d = memcpy(dst, src, 6);
// 	printf("dst orig: %s\n", dst);
// 	}
//
// 	return (0);
// }
