/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvinogra <tvinogra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:31:20 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/15 15:31:22 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	input;

// 	input = ft_isalpha('A');
// 	if (input == 1)
// 		printf("Alphabetical character\n");
// 	else
// 		printf("Not alphabetical character\n");
// }
