/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:32:52 by abouyata          #+#    #+#             */
/*   Updated: 2023/09/20 14:46:21 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (i < size)
	{
		size--;
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		
		i++;
	}

}
int main(void)
{
	int t[] = {1,2,3,4,5,6,7,8,9};
	int s = 9;

	ft_rev_int_tab(t, s);
	printf("t = ");
	for (int i = 0; i < s; i++) {
        printf("%d", t[i]); // Print the reversed array
    }
    printf("\n");
}
