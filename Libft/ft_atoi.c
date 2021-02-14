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
/*int atoi ( const char * str);

atoi () converte um string str para um int

uma função remove do inicio da string determinadas vezes, conforme o seguinte:

  

              '\t' horizontal tab
              '\n' newline
              '\r' cariagge return
              '\v' vertical tab
              '\f' formfeed page break
              ' '  space
  
verifica uma vez se o sinal é positivo ou negativo

verifica se os caracteres são numerais

Exemplo 1:

atoi ( "--- + 123d1" );
=> 0

Exemplo 2:

atoi ( "-123" );
=> -123
*/

int 		ft_atoi ( const  char * str)
{
	long  long  int 	res;
					operador int ;

	operador = 1 ;
	res = 0 ;
	while (* str && (* str == '  ' || * str == ' \ n ' || * str == ' \ t ' ||
			* str == ' \ v ' || * str == ' \ f ' || * str == ' \ r ' ))
		++ str;
	if (* str == ' - ' )
		operador = - 1 ;
	if (* str == ' - ' || * str == ' + ' )
		++ str;
	while (* str && * str> = ' 0 ' && * str <= ' 9 ' )
	{
		res = res * 10 + (* str - 48 );
		if (res> 2147483648 && operator == 1 )
			return (- 1 );
		else  if (res> 2147483648 && operator == - 1 )
			return ( 0 );
		++ str;
	}
	return (operador res *);
}