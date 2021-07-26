/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 09:58:47 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:22 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_options	*init_option(void)
{
	t_options	*ret;

	ret = malloc(sizeof(t_options));
	ret->minus = 0;
	ret->zero = 0;
	ret->width = 0;
	ret->dot = -1;
	ret->type = 0;
	return (ret);
}

int	*check_option(const char *format, int *pos,
		t_options *opt, va_list ap)
{
	while (check_type(format, pos) > 0)
	{
		if (format[pos[0]] == '-')
			opt->minus = 1;
		else if (format[pos[0]] == '0')
			opt->zero += 1;
		else if (format[pos[0]] == '.')
		{
			opt->dot = 0;
			opt->dot = ft_take_number(format, pos, opt->dot);
		}
		else if (format[pos[0]] == '*' && opt->dot != -1)
			opt->dot = va_arg(ap, int);
		else if (format[pos[0]] == '*')
			opt->width = va_arg(ap, int);
		else if (format[pos[0]] >= '0' && format[pos[0]] <= '9')
		{
			opt->width = 0;
			pos[0]--;
			opt->width = ft_take_number(format, pos, opt->width);
		}
		pos[0]++;
	}
	opt->type = format[pos[0]];
	return (pos);
}

int	specifier(const char *fmt, va_list ap, int *pos)
{
	t_options	*opt;
	int			cnt;

	opt = init_option();
	pos[0]++;
	pos = check_option(fmt, pos, opt, ap);
	cnt = print_by_type(opt, ap);
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	int			pos[1];
	va_list		ap;
	int			cnt;
	int			cnt_d;

	va_start(ap, format);
	pos[0] = 0;
	cnt = 0;
	cnt_d = 0;
	while (format[pos[0]])
	{
		if (format[pos[0]] == '%')
		{
			cnt_d = specifier(format, ap, pos);
			if (cnt_d == -2)
				return (0);
			cnt += cnt_d;
		}
		else
			write(1, &format[pos[0]], 1);
		pos[0]++;
		cnt++;
	}
	va_end(ap);
	return (cnt);
}
