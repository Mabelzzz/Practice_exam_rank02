/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:03:48 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/11/17 01:14:07 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>
int main()
{
	int *a;
	int *b;
	int	a1 = 23;
	int	b1 = 32;

	a = &a1;
	b = &b1;
	ft_swap(a, b);
	printf("a : %d \nb : %d\n", *a, *b);
}
*/