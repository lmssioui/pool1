/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <abouyata@studant.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:29:49 by abouyata          #+#    #+#             */
/*   Updated: 2023/09/18 18:42:10 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	div = i;
	mod = j;
	
	div = a / b;
	mod = a % b;
}
int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 9;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d mod = %d",a ,b);

}
