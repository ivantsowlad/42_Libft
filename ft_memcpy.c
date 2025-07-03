/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivantso <vivantso@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:17:18 by vivantso          #+#    #+#             */
/*   Updated: 2025/05/23 12:17:18 by vivantso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destin;
	const unsigned char	*source;

	if (!dest && !src && n > 0)
		return (NULL);
	if (!dest && !src && n == 0)
		return (dest);
	destin = (unsigned char *)dest;
	source = (const unsigned char *)src;
	while (n--)
		*destin++ = *source++;
	return (dest);
}
