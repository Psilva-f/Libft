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

int		ft_strncmp(const char *s1, const char *s2, size_t n)
/*strcmp () , strncmp ()
        A função strcmp () compara duas strings byte a byte, de acordo com a 
       ordem do conjunto de caracteres de sua máquina. A função retorna um 
       inteiro maior, igual ou menor que 0, se a string apontada 
       por s1 for maior, igual ou menor que a string apontada por s2,
        respectivamente. O sinal de um valor de retorno diferente de zero é determinado pelo
       sinal da diferença entre os valores do primeiro par de bytes que 
       diferem nas strings que estão sendo comparadas. A função strncmp () faz a 
       mesma comparação, mas verifica no máximo n bytes. Bytes após um 
       byte nulo não são comparados. */
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n > 0)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}