/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   tvinogra <tvinogra@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:56:24 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/17 11:00:59 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && (*s1 == *s2) && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("ABCD", "ABCC", 3));
// 	return (0);
// }
