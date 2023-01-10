/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:27 by alcelik           #+#    #+#             */
/*   Updated: 2023/01/04 14:00:57 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *bi, int c, size_t len)
{
	while (len)
		((unsigned char *)bi)[--len] = c;
	return (bi);
}
