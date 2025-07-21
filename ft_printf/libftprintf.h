/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:52:25 by alpascua          #+#    #+#             */
/*   Updated: 2025/01/12 16:27:33 by alpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int	ft_printf(char const *format, ...);

int	ft_printchar(char c);

int	ft_printstr(char *str);

int	ft_numlen(unsigned long num, unsigned long base);

int	ft_printbase(unsigned long nbr, char *base, unsigned long len);

int	ft_printpointer(int long long ptr);
