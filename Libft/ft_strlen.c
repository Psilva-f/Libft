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

size_t		ft_strlen(const char *s){
//A função strlen () retorna o número de bytes em s , sem incluir o caractere nulo de terminação. https://illumos.org/man/9f/strlcat

  unsigned int i;
  i =0;
  while (s[i] != '\0')
    i++;
  return 0;
}