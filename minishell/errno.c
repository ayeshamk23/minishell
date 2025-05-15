/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errno.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:53:20 by inkahar           #+#    #+#             */
/*   Updated: 2024/09/05 20:03:12 by aymohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	*errno(t_errorcode OPCODE, char *s, int flag)
{
	g_sig = flag;
	if (OPCODE == UNCLOSEDPARA)
		ft_putstr_fd("minishell: error while looking for matching quote", 2);
	else if (OPCODE == NOTDIR)
		ft_putstr_fd("no directory", 2);
	else if (OPCODE == NPERM)
		ft_putstr_fd("no PERMISSION", 2);
	else if (OPCODE == PIPENDERR)
		ft_putstr_fd("no directory", 2);
	else if (OPCODE == NO_CMD)
		ft_putstr_fd("minishell: command not found: ", 2);
	else if (OPCODE == CHECK_DIR)
		ft_putstr_fd("minishell: Is a directory: ", 2);
	else if (OPCODE == ERR_PIPE)
		ft_putstr_fd("minishell: error creating pipe", 2);
	else if (OPCODE == ERR_FORK)
		ft_putstr_fd("minishell: fork failed", 2);
	else if (OPCODE == ERR_DUP)
		ft_putstr_fd("minishell: dup2 failed", 2);
	else if (OPCODE == NOFILE_DIR)
		ft_putstr_fd("cd: no such file or directory: ", 2);
	ft_putendl_fd(s, 2);
	return (NULL);
}
