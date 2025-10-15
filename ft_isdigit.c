/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvinogra <tvinogra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:31:40 by tvinogra          #+#    #+#             */
/*   Updated: 2025/10/15 15:31:42 by tvinogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	input;

// 	input = ft_isdigit('1');
// 	if (input == 1)
// 		printf("Digit character\n");
// 	else
// 		printf("Not digit character\n");
// }
