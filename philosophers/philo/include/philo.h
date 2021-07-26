/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:13:30 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 07:50:52 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# define FORK 1
# define EAT 2
# define SLEEP 3
# define THINKING 4
# define DEAD 5
# define ALLEAT 6

# include <pthread.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>

struct	s_info;

typedef struct s_philo {
	int				index;
	int				lfork;
	int				rfork;
	int				eat_count;
	long			start;
	int				eat_status;
	long			eat_limit;
	struct s_info	*info;
	pthread_mutex_t	take;
}					t_philo;

typedef struct s_info {
	int					n_of_philo;
	long				eat;
	long				die;
	long				sleep;
	int					must_eat;
	int					count;
	pthread_t			*id;
	pthread_t			*monitor;
	t_philo				*philo;
	long				start;
	pthread_mutex_t		*fork;
	pthread_mutex_t		printf;
	pthread_mutex_t		dead;
}						t_info;

int			ft_strlen(char *s);
int			get_argv(t_info *philo, char **argv, int argc);
int			ft_atoi(char *str);
int			make_thread(t_info *info);
long		get_time(void);
void		clear_info(t_info *info);
int			error(t_info *info, char *s);
int			pthread_error(t_info *info, char *s);
void		*monitor_error(t_info *info, char *s);
int			one_error(t_info *info, char *s);
int			two_error(t_info *info, char *s);
int			three_error(t_info *info, char *s);
void		ft_usleep(int dalay);
void		display(t_philo *philo, int cmd);
void		*is_alive(void *data);

#endif
