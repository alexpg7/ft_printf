/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:01:58 by alpascua          #+#    #+#             */
/*   Updated: 2025/01/12 16:22:37 by alpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
  int		k;
  char	p[5] = "Hola";
	char	*nul;

	nul = NULL;
	ft_printf("\n---ft_printf---\n");
	k = ft_printf("%%c: %c\n%%s: %s\n%%p: %p\n%%d: %d\n",  'c', nul, (ULONG_MAX), -2147483648);
	k += ft_printf("%%i: %i\n%%u: %u\n%%x: %x\n%%X: %X\n", 42, -42, 2147483647, 2147483647);
  ft_printf("---Characters printed: %i---\n", k);
	ft_printf("\n---printf---\n");
	k = printf("%%c: %c\n%%s: %s\n%%p: %p\n%%d: %ld\n",  'c', nul, (void *)(ULONG_MAX), -2147483648);
	k += printf("%%i: %i\n%%u: %u\n%%x: %x\n%%X: %X\n", 42, -42, 2147483647, 2147483647);
  printf("---Characters printed: %i---\n", k);
	/*k = ft_printf("%%c: %c\n%%s: %s\n%%i: %i\n",  'c', "string", 42);
  ft_printf("-Characters printed: %i\n\n", k);
	k = printf("%%c: %c\n%%s: %s\n%%i: %i\n",  'c', "string", 42);
  printf("-Characters printed: %i\n\n", k);*/
}
