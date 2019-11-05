/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_db.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkirszba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:27:31 by rkirszba          #+#    #+#             */
/*   Updated: 2019/09/12 12:28:31 by rkirszba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_db(double *db1, double *db2)
{
	double	tmp;

	tmp = *db1;
	*db1 = *db2;
	*db2 = tmp;
}