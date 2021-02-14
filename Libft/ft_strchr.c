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

char	*ft_strchr(const char *s, int c)
/* strchr => protótopo da função
char *strchr(const char *s, int c);
A função localiza a primeira ocorrencia de c (convertido para char) na string apontada por s.
(A função strchr () retorna um ponteiro para a primeira ocorrência
       do caractere ""caractere" significa "byte" c na string s . As funções strchr () e strrchr () retornam um ponteiro para o
       caractere correspondente ou NULL se o caractere não for encontrado. o
       terminar byte nulo é considerado parte da string, de modo que
       se c for especificado como '\ 0', essas funções retornarão um ponteiro para
       o terminador.)

// \0 é considerado parte da string

Ela retorna a posição do caractere na string

ou NULL se o caracter nao for encontrado.*/
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		++s;
	}
	if (c == '\0')
		return ((char*)s);
	return (0);
}