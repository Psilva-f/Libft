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

int		ft_isalnum(int c)
//função verifica se o caractere passado é uma letra ou numero.  O isalnum () e isalnum_l () funções devem retornar diferente de zero se
/* c é um caractere alfanumérico; caso contrário, eles devem retornar 0.
retorna 1 se verdadeiro
retorna 0 se falso*/
{
	return (ft_isalpha(c) || ft_isdigit(c));
}