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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
/* A função strlcat () anexa no máximo ( dstsize - strlen ( dst ) -1) 
       caracteres de src a dst ( dstsizesendo o tamanho do buffer de string 
       dst ). Se a string apontada por dst contiver uma string terminada em nulo 
       que se encaixa em bytes dstsize quando strlcat () é chamada, a string apontada 
       por dst será uma string terminada em nulo que se encaixa em bytes dstsize
        (incluindo o caractere nulo final) quando for concluído, e o 
       caractere inicial de src substituirá o caractere nulo no final de 
       dst . Se a string apontada por dst for maior que dstsize bytes quando 
       strlcat ()for chamado, a string apontada por dst não será alterada. 
       A função retorna min { dstsize , strlen ( dst )} + strlen ( src ). O 
       estouro do buffer pode ser verificado da seguinte maneira: 

         if (strlcat (dst, src, dstsize)> = dstsize) 
                 return -1; */
{
	size_t	i;
	size_t	dst_lenght;
	size_t	src_lenght;

	i = 0;
	dst_lenght = ft_strlen(dst);
	src_lenght = ft_strlen(src);
	if (dstsize <= dst_lenght)
		return (dstsize + src_lenght);
	while (dst[i])
		i++;
	while (*src && i < dstsize - 1)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (dst_lenght + src_lenght);
}