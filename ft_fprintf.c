/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:59:35 by yabukirento       #+#    #+#             */
/*   Updated: 2025/04/16 12:19:31 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fprintf1(const char *fmt, const char *arg)
{
	char		buf[BUFFER_SIZE];
	int			i;
	int			j;

	i = 0;
	if (arg == NULL)
		return ;
	while (*fmt && i < BUFFER_SIZE - 1)
	{
		if (*fmt == '%' && *(fmt + 1) == 's')
		{
			j = 0;
			while (arg[j] && i < BUFFER_SIZE - 1)
				buf[i++] = arg[j++];
			fmt += 2;
		}
		else
			buf[i++] = *fmt++;
	}
	buf[i] = '\0';
	write(STDERR_FILENO, buf, i);
}

void	ft_fprintf2(const char *fmt, const char *arg1, const char *arg2)
{
	char		buf[BUFFER_SIZE];
	int			i;
	int			j;
	const char	*arg;

	i = 0;
	arg = arg1;
	if (arg1 == NULL || arg2 == NULL)
		return ;
	while (*fmt && i < BUFFER_SIZE - 1)
	{
		if (*fmt == '%' && *(fmt + 1) == 's')
		{
			j = 0;
			while (arg[j] && i < BUFFER_SIZE - 1)
				buf[i++] = arg[j++];
			arg = arg2;
			fmt += 2;
		}
		else
			buf[i++] = *fmt++;
	}
	buf[i] = '\0';
	write(STDERR_FILENO, buf, i);
}
