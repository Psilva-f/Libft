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

char	*ft_strrchr(const char *s, int c)
"A função localiza a ultima ocorrência de c (convertido para char)
( A função strchr () retorna um ponteiro para a última ocorrência
       do caractere c na string s .)

na string apontada por s.

// \ 0 é considerado parte da string

Ela retorna a posição do caractere na string

ou NULL se o caractere nao para encontrado."
{
	char	*last_ps;

	last_ps = (0);
	while (*s)
	{
		if (*s == c)
			last_ps = (char*)s;
		++s;
	}
	if (last_ps)
		return (last_ps);
	if (c == '\0')
		return ((char*)s);
	return (0);
}