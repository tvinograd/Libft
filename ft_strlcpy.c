/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:59:37 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/16 20:29:32 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	dst[10];
// 	char	src[] = "Hello, my name is Tatiana";
// 	size_t	dstsize = sizeof(dst);
// 	size_t	length;

// 	length = ft_strlcpy(dst, src, dstsize);
// 	printf("Needed length: %zu\n", length);
// 	printf("Output: %s\n", dst);
// 	return (0);
// }
