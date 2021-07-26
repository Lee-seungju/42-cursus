/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 09:59:30 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:23 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_options
{
	int			minus;
	int			zero;
	int			width;
	int			dot;
	int			type;
}				t_options;

int				ft_printf(const char *format, ...);
char			*ft_16str(char type, unsigned int price);
char			*ft_itoa(int n);
int				ft_strlen(char *s);
char			*ft_strdup(char *s);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_u_display(unsigned int n);
char			*ft_display_dot(char *k, char type, int dot);
char			*ft_lenstr(int len, char a);
int				ft_signal(char *k);
char			*ft_p16(unsigned long long price);
char			*ft_display_zero(char *k, int width);
char			*ft_display_minus(char *k, int s_len);
int				ft_display_cnull(t_options *opt, char *k);
int				check_type(const char *format, int *pos);
char			*ft_str_c_dup(int a);
int				print_by_type(t_options *opt, va_list ap);
int				ft_take_number(const char *format, int *pos, int price);

#endif
