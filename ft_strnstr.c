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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
/* A função strnstr () localiza a primeira ocorrência do termo -nulo
     string nated pouco na string grande , onde não mais do que	 len caracteres
     são pesquisados. Os caracteres que aparecem após um caractere `\ 0 'não são
     pesquisado. Uma vez que a função strnstr () é uma API específica do FreeBSD,
     só deve ser usado quando a portabilidade não for uma preocupação.

VALORES DE RETORNO 
     Se	 little for uma string vazia, big é retornado; se pouco ocorrer em lugar nenhum
     em	 grande , NULL é retornado; caso contrário, um ponteiro para o primeiro caractere de
     a primeira ocorrência de pouco é retornada.*/
{
	size_t	ps;
	size_t	i;

	ps = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[pos] != '\0' && ps < len)
	{
		if (haystack[ps] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[ps + i] == needle[i]
					&& (ps + i) < len)
				i++;
			if (needle[i] == '\0')
			{
				haystack = &haystack[ps];
				return ((char*)haystack);
			}
		}
		ps++;
	}
	return (0);
}