# O projecto vai consistir apenas em 3 ficheiros:

## 1. ft_printf.c -> que vai conter a lógica da função principal e da função que 
		  chama diferentes métodos consoante o caracter que estiver 
		  depois do sinal de percentagem
	a. int ft_printf(const char *str, ...)
		i. a função principal vai percorrer o string format até encontrar um 
          sinal de percentagem. Assim que o encontrar, vai chamar a função
          handle_specifier.
        ii. a função handle_specifier recebe o str format, e, consoante o 
          specifier, vai chamar a função correspondente, dentro de 7 possibi-
          lidades:
            1. c -> ft_putchar();
            2. str -> ft_putstr();
            3

## 2. printf_utils.c -> é o ficheiro que contém as funções que facilitam a 
		    impressão strs, chars e ints: ft_putchar, ft_putstr, 
		    ft_putnbr e ft_putunbr
	a. ft_putchar
	b. ft_putstr
	c. ft_putnbr
	d. ft_putnbr_unsigned

## 3. hexadecimal_utils.c -> contém as funções que nos vão ajudar a lidar com
			  números hexadeximais: ft_hex_base, ft_puthex e 
			  ft_puthex_pointer.
	a. ft_hex_base
	b. ft_puthex
	c. ft_puthex_pointer

