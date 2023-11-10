/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:19:54 by abarrio-          #+#    #+#             */
/*   Updated: 2023/10/20 17:42:05 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "color.h"

int	main(void)
{
	char *ptr;
	int mio;
	int no_mio;

	ptr = NULL;
	
	printf("%s------ PRIMERA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIO, c: (%c)\n", 's');
	no_mio = printf("FUNCION PRE, c: (%c)\n", 's');
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, c: (%5c)\n", 's');
	no_mio = printf("FUNCION PRE, c: (%5c)\n", 's');
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, c -: (%-5c)\n", 's');
	no_mio = printf("FUNCION PRE, c -: (%-5c)\n", 's');
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, cc -: (%-15c)(%-c)\n", 's', '$');
	no_mio = printf("FUNCION PRE, cc -: (%-15c)(%-c)\n", 's', '$');
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, cc -: (%1c), (%1c), (%1c)\n", '5', 'x', '\n');
	no_mio = printf("FUNCION PRE, cc -: (%1c), (%1c), (%1c)\n", '5', 'x', '\n');
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");

	printf("%s------ SEGUNDA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIO, s: (%s)\n", NULL);
	no_mio = printf("FUNCION PRE, s: (%s)\n", NULL);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: (%s)\n", "hola");
	no_mio = printf("FUNCION PRE, s: (%s)\n", "hola");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: (%-20.2s)\n", "hola que tal");
	no_mio = printf("FUNCION PRE, s: (%-20.2s)\n", "hola que tal");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: (%5.10s)\n", "");
	no_mio = printf("FUNCION PRE, s: (%5.10s)\n", "");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: (%s)\n", "hola que tal");
	no_mio = printf("FUNCION PRE, s: (%s)\n", "hola que tal");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: (%5s), (%5s), (%5s), (%5s)\n", (char *)NULL, "", "test", "joihwhhgsdkhksdgsdg\t\v\n\r\f\a25252\b6");
	no_mio = printf("FUNCION PRE, s: (%5s), (%5s), (%5s), (%5s)\n", (char *)NULL, "", "test", "joihwhhgsdkhksdgsdg\t\v\n\r\f\a25252\b6");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: !%10.30s!\n", "(null)");
	no_mio = printf("FUNCION PRE, s: !%10.30s!\n", "(null)");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: (%100s), (%100s), (%100s), (%100s)\n", (char *)NULL, "", "test", "joihwhhgsdkhksdgsdg\t\v\n\r\f\a25252\b6");
	no_mio = printf("FUNCION PRE, s: (%100s), (%100s), (%100s), (%100s)\n", (char *)NULL, "", "test", "joihwhhgsdkhksdgsdg\t\v\n\r\f\a25252\b6");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, s: (%5.5s), (%5.5s), (%5.5s), (%5.5s)\n", (char *)NULL, "", "test", "joihwhhgsdkhksdgsdg\t\v\n\r\f\a25252\b6");
	no_mio = printf("FUNCION PRE, s: (%5.5s), (%5.5s), (%5.5s), (%5.5s)\n", (char *)NULL, "", "test", "joihwhhgsdkhksdgsdg\t\v\n\r\f\a25252\b6");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");
	
	printf("%s------ TERCERA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIO, p: (%pp%p%p)\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	no_mio = printf("FUNCION PRE, p: (%pp%p%p)\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, p: (%-30p)\n", (void *)INT_MAX);
	no_mio = printf("FUNCION PRE, p: (%-30p)\n", (void *)INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, p: \\!/(%24p)\\!/\n", "0x3f1c3ec2");
	no_mio = printf("FUNCION PRE, p: \\!/(%24p)\\!/\n", "0x3f1c3ec2");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, p: (%10p)\n", ptr);
	no_mio = printf("FUNCION PRE, p: (%10p)\n", ptr);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, p: 42(%-1p)42\n", "4558362096");
	no_mio = printf("FUNCION PRE, p: 42(%-1p)42\n", "4558362096");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");


	printf("%s------ CUARTA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIO, d: (%20.12d)\n", 1234567890);
	no_mio = printf("FUNCION PRE, d: (%20.12d)\n", 1234567890);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d: (% d)\n", INT_MIN);
	no_mio = printf("FUNCION PRE, d: (% d)\n", INT_MIN);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d +: (%+d)\n", 42);
	no_mio = printf("FUNCION PRE, d +: (%+d)\n", 42);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, +: (%+d) (%+d) (%+d) (%+d) (%+d) (%+d) (%+d)\n", INT_MAX, INT_MIN, 10, 10, 40, 0, -42);
	no_mio = printf("FUNCION PRE, +: (%+d) (%+d) (%+d) (%+d) (%+d) (%+d) (%+d)\n", INT_MAX, INT_MIN, 10, 10, 40, 0, -42);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");
	mio = ft_printf("FUNCION MIO, d 0: (%030d)\n", -42);
	no_mio = printf("FUNCION PRE, d 0: (%030d)\n", -42);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d 0: %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	no_mio = printf("FUNCION PRE, d 0: %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d 0: 42%-+10.16d42\n", 860251398);
	no_mio = printf("FUNCION PRE, d 0: 42%-+10.16d42\n", 860251398);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d 0: !%-25.15d!\n", -839696735);
	no_mio = printf("FUNCION PRE, d 0: !%-25.15d!\n", -839696735);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d 0: !% 24.8d!\n", 2);
	no_mio = printf("FUNCION PRE, d 0: !% 24.8d!\n", 2);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d 0: (%.2d)\n", -1);
	no_mio = printf("FUNCION PRE, d 0: (%.2d)\n", -1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d 0: %-.100d, %.100d, %.100d, %.100d, %.100d, %.100d, %.100d, %.100d\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	no_mio = printf("FUNCION PRE, d 0: %.100d, %.100d, %.100d, %.100d, %.100d, %.100d, %.100d, %.100d\n", 0, 5, -1, -10, 100, -1862, INT_MIN, INT_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, d 0: !(% 24.8d)!\n", 1);
	no_mio = printf("FUNCION PRE, d 0: !(% 24.8d)!\n", 1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");

	printf("%s------ QUINTA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIO, i: (%+i)\n", 42);
	no_mio = printf("FUNCION PRE, i: (%+i)\n", 42);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, i: >------------<(% 23.60d)>------------<\n", 1);
	no_mio = printf("FUNCION PRE, i: >------------<(% 23.60d)>------------<\n", 1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, i: (%-3.2i)\n", 3);
	no_mio = printf("FUNCION PRE, i: (%-3.2i)\n", 3);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");

	printf("%s------ SEXTA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIO, u: (%u)\n", INT_MIN);
	no_mio = printf("FUNCION PRE, u: (%u)\n", INT_MIN);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%020u)\n", INT_MIN);
	no_mio = printf("FUNCION PRE, u: (%020u)\n", INT_MIN);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%20.7u)\n", INT_MIN);
	no_mio = printf("FUNCION PRE, u: (%20.7u)\n", INT_MIN);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%-4u)\n", 9);
	no_mio = printf("FUNCION PRE, u: (%-4u)\n", 9);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%-9u) (%-10u) (%-14u) (%-15u)\n", INT_MAX, INT_MIN, 0, -42);
	no_mio = printf("FUNCION PRE, u: (%-9u) (%-10u) (%-14u) (%-15u)\n", INT_MAX, INT_MIN, 0, -42);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%03u)\n", 1);
	no_mio = printf("FUNCION PRE, u: (%03u)\n", 1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%020u)\n", 11);
	no_mio = printf("FUNCION PRE, u: (%020u)\n", 11);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%010u)\n", INT_MIN);
	no_mio = printf("FUNCION PRE, u: (%010u)\n", INT_MIN);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIO, u: (%03u)\n", -101);
	no_mio = printf("FUNCION PRE, u: (%03u)\n", -101);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");

	printf("%s------ SEPTIMA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIA, x: (%x)\n", 123);
	no_mio = printf("FUNCION PRE, x: (%x)\n", 123);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, x: (%#x)\n", 0);
	no_mio = printf("FUNCION PRE, x: (%#x)\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, x: (%-10x)\n", 123);
	no_mio = printf("FUNCION PRE, x: (%-10x)\n", 123);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, x: (%-3x)\n", -14);
	no_mio = printf("FUNCION PRE, x: (%-3x)\n", -14);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, x: (%01x)\n", 0);
	no_mio = printf("FUNCION PRE, x: (%01x)\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, x: (%.4x)\n", 15);
	no_mio = printf("FUNCION PRE, x: (%.4x)\n", 15);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	/*mio = ft_printf("FUNCION MIA, x: (%.10x)", LONG_MAX);
	no_mio = printf("FUNCION PRE, x: (%.10x)", LONG_MAX);
	printf("%d\n", mio);
	printf("%d\n", no_mio);*/
	/*mio = ft_printf("FUNCION MIA, x: (%.14x)", 9223372036854775807LL);
	no_mio = printf("FUNCION PRE, x: (%.14x)", 9223372036854775807LL);
	printf("%d\n", mio);
	printf("%d\n", no_mio);*/
	printf("\n");

	printf("%s------ OCTABA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIA, X: (%X)\n", 456);
	no_mio = printf("FUNCION PRE, X: (%X)\n", 456);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, X: (%#X)\n", 0);
	no_mio = printf("FUNCION PRE, X: (%#X)\n", 0);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, X: (%-10X)\n", 456);
	no_mio = printf("FUNCION PRE, X: (%-10X)\n", 456);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, X: (%10.5X)\n", 456);
	no_mio = printf("FUNCION PRE, X: (%10.5X)\n", 456);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	
	printf("\n");

	printf("%s------ NOVENA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIA, porcentaje: (%%)\n");
	no_mio = printf("FUNCION PRE, porcentaje: (%%)\n");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, porcentaje: (%-5%)\n");
	no_mio = printf("FUNCION PRE, porcentaje: (%-5%)\n");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, porcentaje: (%5%)\n");
	no_mio = printf("FUNCION PRE, porcentaje: (%5%)\n");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	mio = ft_printf("FUNCION MIA, porcentaje: (%-05%)\n");
	no_mio = printf("FUNCION PRE, porcentaje: (%-05%)\n");
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	printf("\n");

	printf("%s------ DECIMA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIA, d,s,p: (%d)\n(%s)\n(%p)\n", 200045, "hola", ptr);
	no_mio = printf("FUNCION PRE, d,s,p: (%d)\n(%s)\n(%p)\n", 200045, "hola", ptr);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	
	printf("\n");
	mio = 0;
	printf("%s------ DECIMA PRUEBA ------%s\n\n", GREENFOSFI, CLEAR);
	mio = ft_printf("FUNCION MIA, (%10.5d)\n", 1);
	no_mio = printf("FUNCION PRE, (%10.5d)\n", 1);
	printf("%d\n", mio);
	printf("%d\n", no_mio);
	
	return (0);
	
}
