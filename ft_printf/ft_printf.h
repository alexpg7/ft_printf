/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpascua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 16:52:25 by alpascua          #+#    #+#             */
/*   Updated: 2025/01/08 13:31:27 by alpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char const *format, ...);

int	ft_printchar(char c);

int	ft_printstr(char *str);

int	ft_numlen(int long long num, int long long base);

int	ft_printbase(int long long nbr, char *base, int long long len);

int	ft_printpointer(int long long ptr);
