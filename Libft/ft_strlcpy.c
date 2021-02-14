# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Untitled-1                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psilva-f <psilva-f@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 16:07:41 by psilva-f          #+#    #+#              #
#    Updated: 2021/02/03 16:07:41 by psilva-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# inclui  " libft.h "

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
"As funções strlcpy () e strlcat () retornam o 
     comprimento total da string que tentaram criar. Para strlcpy (), isso significa o 
     comprimento de src . Para strlcat (), isso significa o comprimento inicial de dst 	mais 
     o comprimento de src . "
{
	unsigned int i;
	unsigned int result;

	i = 0;
	result = 0;
	if (!dst || !src)
		return (0);
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[result] != '\0')
	{
		result++;
	}
	return (result);
}