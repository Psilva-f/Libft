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

void	*ft_memchr(const void *s, int c, size_t n)
/*procura um personagem na memória
 A função memchr () verifica os n bytes iniciais da memória
       área apontada por s para a primeira instância de c . Ambos c eo
       bytes da área de memória apontada por s são interpretados como
        unsigned char .
				A funções memchr () e memrchr () retornam um ponteiro para o
       byte correspondente ou NULL se o caractere não ocorrer no
       dada área de memória.*/
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char*)s;
	while (++i <= n)
		if (*(ptr++) == (unsigned char)c)
			return ((void*)--ptr);
	return (0);
}