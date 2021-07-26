/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee2 <slee2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:13:30 by slee2             #+#    #+#             */
/*   Updated: 2021/07/23 07:51:19 by slee2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

# define FORK 1
# define EAT 2
# define SLEEP 3
# define THINKING 4
# define DEAD 5
# define ALLEAT 6

# include <pthread.h>
# include <semaphore.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <signal.h>

struct	s_info;

typedef struct s_philo {
	int				index;
	int				lfork;
	int				rfork;
	long			start;
	int				eat_status;
	long			eat_limit;
	int				eat_count;
	struct s_info	*info;
	sem_t			*take;
	char			*take_dup;
}					t_philo;

typedef struct s_info {
	int					n_of_philo;
	long				eat;
	long				die;
	long				sleep;
	int					must_eat;
	int					someonedie;
	pid_t				*id;
	pthread_t			*monitor;
	t_philo				*philo;
	long				start;
	sem_t				*fork;
	sem_t				*printf;
	sem_t				*dead;
	sem_t				*eat_check;
	sem_t				*dead_eat_check;
}						t_info;

int			ft_strlen(char *s);
int			get_argv(t_info *philo, char **argv, int argc);
int			ft_atoi(char *str);
int			make_thread(t_info *info);
long		get_time(void);
void		clear_info(t_info *info);
int			error(char *s);
int			fork_error(t_info *info, char *s);
void		monitor_error(t_info *info, char *s);
void		one_error(t_info *info, char *s);
void		two_error(t_info *info, char *s);
void		three_error(t_info *info, char *s);
void		ft_usleep(int dalay);
void		display(t_philo *philo, int cmd);
void		*is_alive(void *data);
sem_t		*ft_sem_open(char const *name, int value);
char		*ft_dup(int i, t_info *info);
void		*eat_check(void *data);
void		clear_info_sub(t_info *info);

#endif
