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
//A função itoa () constrói uma representação de string de um inteiro.
static  unsigned  int 	get_nb_digit ( long n_l, int sign)
{
	unsigned  int 	digit;

	if (n_l == 0 )
		return ( 1 );
	digit = 0 ;
	while(n_l> 0 )
	{
		n_l / = 10 ;
		digit ++;
	}
	if (sinal == - 1 )
		digit ++;
	return (digit);
}

static  void 			convert_nb ( char * outstr, long n_l, unsigned  int nb_digit,
		sinal interno )
{
	outstr [nb_digit] = ' \ 0 ' ;
	outstr [- nb_digit] = n_l% 10 + ' 0 ' ;
	n_l / = 10 ;
	while(n_l> 0 )
	{
		outstr [- nb_digit] = n_l% 10 + ' 0 ' ;
		n_l / = 10 ;
	}
	if (sinal == - 1 )
		outstr [ 0 ] = ' - ' ;
}

char 				* ft_itoa ( int n)
{
	char 			* outstr;
	long 			n_l;
	unsigned  int 	nb_digit;
					sinal int ;

	sinal = 1 ;
	if (n < 0 )
	{
		n_l = ( longo ) n * - 1 ;
		sinal = - 1 ;
	}
	else
		n_l = n;
	nb_digit = get_nb_digit (n_l, sinal);
	if (! (outstr = malloc ( sizeof ( char ) * nb_digit + 1 )))
		retorno ( NULL );
	convert_nb (outstr, n_l, nb_digit, sinal);
	retorno (outtr);
}