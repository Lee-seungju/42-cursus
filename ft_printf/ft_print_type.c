/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:14:21 by slee2             #+#    #+#             */
/*   Updated: 2021/07/09 02:37:31 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_k_type(t_options *opt, va_list ap)
{
	if (opt->type == 'd' || opt->type == 'i')
		return (ft_itoa(va_arg(ap, int)));
	else if (opt->type == 'u')
		return (ft_u_display(va_arg(ap, unsigned int)));
	else if (opt->type == 'x')
		return (ft_16str('x', va_arg(ap, unsigned int)));
	else if (opt->type == 'X')
		return (ft_16str('X', va_arg(ap, unsigned int)));
	else if ((opt->type == 'p' && opt->dot == -1)
		|| (opt->type == 'p' && opt->dot != -1 && opt->width != 0))
		return (ft_strjoin
			(ft_strdup("0x"), ft_p16(va_arg(ap, unsigned long long))));
	else if (opt->type == 's')
		return (ft_strdup(va_arg(ap, char *)));
	else if (opt->type == 'c')
		return (ft_str_c_dup(va_arg(ap, int)));
	else if (opt->type == '%')
		return (ft_strdup("%"));
	return (0);
}

char	*ft_k_option(t_options *opt, char *k, va_list ap)
{
	int		len;

	if (opt->dot != -1 && opt->type == 'p' && opt->width == 0)
		k = ft_strjoin(ft_strdup("0x"), ft_display_dot(ft_p16(
						va_arg(ap, unsigned long long)), 'p', opt->dot));
	else if (opt->dot != -1 && opt->type == 'p'
		&& opt->width != 0 && k[2] == '0')
		k = ft_strdup("0x");
	if (opt->dot != -1 && opt->type != 'p')
		k = ft_display_dot(k, opt->type, opt->dot);
	if (opt->zero == 1)
		k = ft_display_zero(k, opt->width);
	len = ft_strlen(k);
	if (opt->minus == 1 && opt->width > len && opt->width > 0)
		k = ft_display_minus(ft_strjoin(ft_lenstr(
						opt->width - len, ' '), k), len);
	if (opt->width > ft_strlen(k) && opt->zero != 1 && opt->width > 0)
		k = ft_strjoin(ft_lenstr(opt->width - ft_strlen(k), ' '), k);
	else if (opt->width < 0 && - opt->width > ft_strlen(k))
		k = ft_strjoin(k, ft_lenstr(-opt->width - ft_strlen(k), ' '));
	return (k);
}

int	print_by_type(t_options *opt, va_list ap)
{
	char	*k;
	int		i;

	if (opt->dot < 0)
		opt->dot = -1;
	if ((opt->width && opt->zero && opt->minus)
		|| (opt->dot != -1 && opt->zero))
		opt->zero = 0;
	k = ft_k_type(opt, ap);
	if (opt->type == 'c' && k[0] == '\0')
		return (ft_display_cnull(opt, k));
	k = ft_k_option(opt, k, ap);
	if (!k || (!opt->dot && k[0] == '0' && opt->type != 'p'))
		return (-1);
	free(opt);
	i = -1;
	while (k[++i])
		write(1, &k[i], 1);
	free(k);
	return (i - 1);
}
