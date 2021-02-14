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

char	*ft_strdup(const char *s1)
/*A função strdup () retorna um ponteiro para uma nova string que é
       uma duplicata da string s1 . A memória para a nova corda é
       obtido com malloc (3) , e pode ser liberado com free (3) .
			 Em caso de sucesso, a função strdup () retorna um ponteiro para o
       string duplicada. Ele retorna NULL se memória insuficiente
       disponível, com erro definido para indicar a causa do erro.*/
{
	char	*new;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	new = malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}