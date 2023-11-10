/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:26:08 by abarrio-          #+#    #+#             */
/*   Updated: 2023/10/22 00:56:06 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int mio;
	int no_mio;

	mio = ft_printf("FUNCION MIO, (% .0d)\n", 0);
	no_mio = printf("FUNCION PRE, (% .0d)\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (% .2d)\n", -234);
	no_mio = printf("FUNCION PRE, (% .2d)\n", -234);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (% .10d)\n", -2344565);
	no_mio = printf("FUNCION PRE, (% .10d)\n", -2344565);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (% .100d)\n", -2341);
	no_mio = printf("FUNCION PRE, (% .100d)\n", -2341);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-2d)\n", -1);
	no_mio = printf("FUNCION PRE, (%-2d)\n", -1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%.2d)\n", -1);
	no_mio = printf("FUNCION PRE, (%.2d)\n", -1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (% d)\n", 2341);
	no_mio = printf("FUNCION PRE, (% d)\n", 2341);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (% d)\n", -2341);
	no_mio = printf("FUNCION PRE, (% d)\n", -2341);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%02d)\n", -1);
	no_mio = printf("FUNCION PRE, (%02d)\n", -1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (% d)\n", -2341);
	no_mio = printf("FUNCION PRE, (% d)\n", -2341);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-9d) (%-10d) (%-11d) (%-12d) (%-13d) (%-14d) (%-15d)\n", INT_MAX, INT_MIN, 0, 0, 0, 0, -42);
	no_mio = printf("FUNCION PRE, (%-9d) (%-10d) (%-11d) (%-12d) (%-13d) (%-14d) (%-15d)\n", INT_MAX, INT_MIN, 0, 0, 0, 0, -42);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, ^.^/(%1.5d)^.^/\n", 1);
	no_mio = printf("FUNCION PRE, ^.^/(%1.5d)^.^/\n", 1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, ^.^/(%1.10d)^.^/\n", 1);
	no_mio = printf("FUNCION PRE, ^.^/(%1.10d)^.^/\n", 1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, >------------<(%42.8d)>------------<\n", -1743850380);
	no_mio = printf("FUNCION PRE, >------------<(%42.8d)>------------<\n", -1743850380);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%7i)\n", -14);
	no_mio = printf("FUNCION PRE, (%7i)\n", -14);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%010.5i)\n", -216);
	no_mio = printf("FUNCION PRE, (%010.5i)\n", -216);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%6.5i)\n", 8375);
	no_mio = printf("FUNCION PRE, (%6.5i)\n", 8375);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, ^.^/(%29.8d)^.^/\n", 60054192);
	no_mio = printf("FUNCION PRE, ^.^/(%29.8d)^.^/\n", 60054192);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, !(%-2.2d)!\n", 0);
	no_mio = printf("FUNCION PRE, !(%-2.2d)!\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-3.3i)\n", 6983);
	no_mio = printf("FUNCION PRE, (%-3.3i)\n", 6983);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, >------------<(% 60d)>------------<\n", 0);
	no_mio = printf("FUNCION PRE, >------------<(% 60d)>------------<\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-10.5i)\n", -216);
	no_mio = printf("FUNCION PRE, (%-10.5i)\n", -216);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, !(% 20d)!\n", 0);
	no_mio = printf("FUNCION PRE, !(% 20d)!\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%5.0i)\n", 0);
	no_mio = printf("FUNCION PRE, (%5.0i)\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (!% 42d!)\n", 0);
	no_mio = printf("FUNCION PRE, (!% 42d!)\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (% 5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	no_mio = printf("FUNCION PRE, (% 5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d), (%+5.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	no_mio = printf("FUNCION PRE, (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d), (%5.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%1.0d), (%1.0d), (%1.0d), (%1.0d), (%1.0d), (%.0d), (%1.0d), (%1.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	no_mio = printf("FUNCION PRE, (%1.0d), (%1.0d), (%1.0d), (%1.0d), (%1.0d), (%.0d), (%1.0d), (%1.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-+1.0d), (%-+1.0d), (%+1.0d), (%+1.0d), (%+1.0d), (%+1.0d), (%+1.0d), (%+1.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	no_mio = printf("FUNCION PRE, (%-+1.0d), (%-+1.0d), (%+1.0d), (%+1.0d), (%+1.0d), (%+1.0d), (%+1.0d), (%+1.0d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-+1d), (%+1d), (%+1d), (%+1d), (%+1d), (%+1d), (%+1d), (%+1d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	no_mio = printf("FUNCION PRE, (%-+1d), (%+1d), (%+1d), (%+1d), (%+1d), (%+1d), (%+1d), (%+1d)\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, \\!/(%0d)\\!/\n", 0);
	no_mio = printf("FUNCION PRE, \\!/(%0d)\\!/\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-5.0i)\n", 0);
	no_mio = printf("FUNCION PRE, (%-5.0i)\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %10x, %10x, %10x, %10x, %10x, %10x, %10x, %10x, %10x, %10x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	no_mio = printf("FUNCION PRE, %10x, %10x, %10x, %10x, %10x, %10x, %10x, %10x, %10x, %10x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	no_mio = printf("FUNCION PRE, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x, %.0x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	no_mio = printf("FUNCION PRE, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x, %1.x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %#38.11x!\n", 905302148);
	no_mio = printf("FUNCION PRE, %#38.11x!\n", 905302148);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %-163.23u%-68.0X\n" ,3421138903u,514939578u);
	no_mio = printf("FUNCION PRE, %-163.23u%-68.0X\n" ,3421138903u,514939578u);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %-189.X%000130.137d%092.60d\n" ,823761827u,-369802385,-444387222);
	no_mio = printf("FUNCION PRE, %-189.X%000130.137d%092.60d\n" ,823761827u,-369802385,-444387222);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, \\!/%#15.40x\\!/\n", 0);
	no_mio = printf("FUNCION PRE, \\!/%#15.40x\\!/\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, ^.^/%#44.6x^.^/\n", 0);
	no_mio = printf("FUNCION PRE, ^.^/%#44.6x^.^/\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	no_mio = printf("FUNCION PRE, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x, %#1x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, >------------<%#.18x>------------<\n", 0);
	no_mio = printf("FUNCION PRE, >------------<%#.18x>------------<\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %-5.0x\n", 0);
	no_mio = printf("FUNCION PRE, %-5.0x\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %-2x\n", -1);
	no_mio = printf("FUNCION PRE, %-2x\n", -1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	no_mio = printf("FUNCION PRE, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x, %#.x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %#1x\n", 5);
	no_mio = printf("FUNCION PRE, %#1x\n", 5);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, (%-13X)\n", UINT_MAX);
	no_mio = printf("FUNCION PRE, (%-13X)\n", UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, !%-2x!\n", 0);
	no_mio = printf("FUNCION PRE, !%-2x!\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, !%#.53x\n", -366565316);
	no_mio = printf("FUNCION PRE, !%#.53x\n", -366565316);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	no_mio = printf("FUNCION PRE, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x, %#.5x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, !%-#5x!\n", 0);
	no_mio = printf("FUNCION PRE, !%-#5x!\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %0#40x\n", 1);
	no_mio = printf("FUNCION PRE, %0#40x\n", 1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %#1.x\n", 0);
	no_mio = printf("FUNCION PRE, %#1.x\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, \\!/%0#x\\!/\n", 0);
	no_mio = printf("FUNCION PRE, \\!/%0#x\\!/\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, 42%#.56x42\n", -2003844439);
	no_mio = printf("FUNCION PRE, 42%#.56x42\n", -2003844439);
	printf("%d\n", no_mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	no_mio = printf("FUNCION PRE, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x, %#5.x\n", 0, 5, -1, -10, 0x1234, -1862, 0xABCDE, INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	
	

	
	
	
	
	

	 
	
	
	

	
	
	
	
	
	return (0);
}