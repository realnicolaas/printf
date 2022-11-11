/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 16:10:25 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/11 16:14:08 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}