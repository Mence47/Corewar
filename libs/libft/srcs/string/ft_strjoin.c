/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:40:13 by rschuppe          #+#    #+#             */
/*   Updated: 2019/01/25 13:01:26 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;

	res = NULL;
	s1_len = ft_strlen(s1);
	res = ft_strnew(s1_len + ft_strlen(s2));
	if (res)
	{
		ft_strcpy(res, s1);
		ft_strcat(res, s2);
	}
	return (res);
}
