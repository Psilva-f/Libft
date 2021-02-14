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

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	/*A função aloca a memoria requerida e retorna o ponteiro para o espaco alocado,

ou NULL se o requerimento falhar. A diferença entre malloc() e calloc() eh que malloc nao zera a memoria alocada
obs:Tipo de dados: size_t
Este é um tipo inteiro sem sinal usado para representar os tamanhos dos objetos. O resultado do sizeofoperador é desse tipo, e funções como malloc
(consulte Alocação irrestrita ) e memcpy(consulte Cópia de strings e matrizes ) aceitam argumentos desse tipo para especificar os tamanhos dos 
objetos. Em sistemas que usam a Biblioteca GNU C, será unsigned intou unsigned long int.*/

	if (!(array = (char *)malloc(size * count)))
		return (NULL);
	return (ft_memset(array, 0, size * count));
}