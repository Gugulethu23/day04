/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:16:52 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/26 12:39:45 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	int factor;
	factor = nb;
	i = 1;
	if (nb == 0 || nb == 1)
		return 1;
	while(i < nb)
	{
		factor = factor*i;
		i++;
	}
	return factor;
}
//int main()
//{
//	int b;
//	b=ft_iterative_factorial(5);
//	printf("factor of 5 is: %d", b);
//	return 0;
//}
