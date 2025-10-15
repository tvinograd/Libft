/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatanavinogradova <tatanavinogradova@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:15:07 by tatanavinog       #+#    #+#             */
/*   Updated: 2025/10/15 12:05:21 by tatanavinog      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(char *str)
{
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	input;

// 	input = ft_isalpha("Hello5");
// 	if (input == 1)
// 		printf("Alphabetical characters or empty\n");
// 	else
// 		printf("Other characters\n");
// }
