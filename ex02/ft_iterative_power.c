/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnkala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:35:08 by gnkala            #+#    #+#             */
/*   Updated: 2020/06/26 12:41:54 by gnkala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_iterative_power(int nb, int power)

{
	int i;
	i = nb;
	if(power < 0 || power == 0 || nb == 1)
		return 1;
	if(nb == 0)
		return 0;
	while(power > 0)
	{

		i = i*nb;
		power--;
	}
	return i;
}
//int main()
//{
//
//	printf("%d\n", ft_iterative_power(4,2));
//	return 0;

//}
