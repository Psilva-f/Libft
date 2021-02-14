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
 /*As funções isalpha () e isalpha_l () devem testar se c é um
       caractere da classe alfa na localidade atual ou na localidade
       representado por locale , respectivamente; veja as definições básicas
       volume de POSIX.1‐2017, Capítulo 7 , Local .
			 As funções isalpha () e isalpha_l () devem retornar diferente de zero se
        c for um caractere alfabético; caso contrário, eles devem retornar 0.*/

int		ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}