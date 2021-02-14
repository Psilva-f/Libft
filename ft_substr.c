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
char *ft_substr(char const *s, unsigned int start, size_t len)
//Este método retorna os caracteres em uma string começando no local especificado até o número especificado de caracteres.
"start - Local onde começar a extrair caracteres (um número inteiro entre 0 e um a menos que o comprimento da string).

comprimento - o número de caracteres a extrair.

Nota - Se o início for negativo, substr o usa como um índice de caractere do final da string.

Valor de retorno"
{
  unsigned int i;
  unsigned int c_len;
	char			*substr;
 
 if (!s)
		return (NULL);
	c_len = ft_strlen(s);
	if (c_len < start)
	{
		if (!(substr = malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}