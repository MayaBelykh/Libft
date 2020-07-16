/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <ccolemon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 18:12:45 by ccolemon          #+#    #+#             */
/*   Updated: 2019/06/03 19:20:56 by ccolemon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc, char **argv)
{
	if (argc != 3 && argc != 2)
	{
		printf("%s : аргументы?", argv[0]);
		return (1);
	}
	// int *p = NULL;
	// int *p;
	// p = malloc(5);

// ft_printf("%#p", p);
// printf("\n");
// printf("%p %p %.0p %X %#X %#.0X\n", p, p, p, 0, 0, 0);
/* тест целочисл.
	// PARx(
		float d = 2.9;
	// 	// unsigned long long  lld = 653649649246;
	// 	// unsigned long  ld = 817073872097;
	// 	// unsigned char hhd = 94;
	// 	// unsigned short int hd = 7774;
	// 	)

	// PARminx(
		float d_minus = -2.9;
	// 	// long long lld_minus = -653649649246;
	// 	// long ld_minus = -817073872097;
	// 	// char hhd_minus = -94;
	// 	// short int hd_minus = -7774;
	// 	)

		// p = NULL;
		// ft_printf("%10c", 65);
		// printf("%20c\n", 65, 15, "dhgf");
		// printf("%2$d, %3$d, %1$d\n", 64357635, 763, 726);
		// printf("%020s\n", "5657":w
		// printf("%-20s\n", "5657");
		// printf("%+20s\n", "5657");
		// long double a = 0.512715875875486;
	*/	printf(" [ std: %d]\n", printf(argv[1], (argv[1][strlen(argv[1]) - 1] == 's' || argv[1][strlen(argv[1]) - 1] == 'p') ? argv[2] : atoi(argv[2])));
		ft_printf("\n");
		printf(" [ my: %d]\n", ft_printf(argv[1], (argv[1][strlen(argv[1]) - 1] == 's' || argv[1][strlen(argv[1]) - 1] == 'p') ? argv[2] : atoi(argv[2])));
	/*	// (argc == 2) ?  printf("%d\n", ft_printf(argv[1])) : printf("%d\n", ft_printf(argv[1], (argv[1][strlen(argv[1]) - 1] == 's' || argv[1][strlen(argv[1]) - 1] == 'p') ? argv[2] : atoi(argv[2])));
		// ft_printf("\n");
		// printf("\n");
		// (argc == 2) ?  printf("%d\n", printf(argv[1])) : printf("%d\n", printf(argv[1], (argv[1][strlen(argv[1]) - 1] == 's' || argv[1][strlen(argv[1]) - 1] == 'p') ? argv[2] : atoi(argv[2])));
		// ft_printf("\n");
		// ft_printf("\n");
		// ft_printf("\n");
		// ft_printf("\n");
		DEBfunc();

	// ft_printf("hefiwegf %s kefgi %-010.-2c hfieuwhg %d", argv[1], atoi(argv[2]), 1024);
	// ft_printf("\n");
	// printf("hefiwegf %s kefgi %-010.-2c hfieuwhg %d", argv[1], atoi(argv[2]), 1024);

	// ft_printf(argv[1], argv[2]);
	// ft_printf("\n");
	// printf(argv[1], argv[2]);

	// printf("\n");
	// STDx(printf(" [std: %d]\n", printf("%p", p)));
	// MYx(printf(" [my: %d]\n", ft_printf("%p", p)));
// 	printf("\n");
// 	printf("\n");
	STDx(printf(" [std   std -: %d]\n", printf("%-100f", d)));
	MYx(printf(" [my    std -: %d]\n", ft_printf("%-100f", d)));
	printf("\n");
	STDminx(printf(" [std   std - minus: %d]\n", printf("%-100f", d_minus)));
	MYminx(printf(" [my    std - minus: %d]\n", ft_printf("%-100f", d_minus)));
	printf("\n");
	STDx(printf(" [std   std #: %d]\n", printf("%#100f", d)));
	MYx(printf(" [my    std #: %d]\n", ft_printf("%#100f", d)));
	printf("\n");
	STDminx(printf(" [std   std # minus: %d]\n", printf("%#100f", d_minus)));
	MYminx(printf(" [my    std # minus: %d]\n", ft_printf("%#100f", d_minus)));
	printf("\n");
	STDx(printf(" [std   +: %d]\n", printf("%+f", d)));
	MYx(printf(" [my    +: %d]\n", ft_printf("%+f", d)));
	printf("\n");
	STDminx(printf(" [std   + minus: %d]\n", printf("%+f", d_minus)));
	MYminx(printf(" [my    + minus: %d]\n", ft_printf("%+f", d_minus)));
	printf("\n");
	STDx(printf(" [std   32: %d]\n", printf("% f", d)));
	MYx(printf(" [my    32: %d]\n", ft_printf("% f", d)));
	printf("\n");
	STDminx(printf(" [std   32 minus: %d]\n", printf("% f", d_minus)));
	MYminx(printf(" [my    32 minus: %d]\n", ft_printf("% f", d_minus)));
	printf("\n");
	STDx(printf(" [std   0: %d]\n", printf("%0100f", d)));
	MYx(printf(" [my    0: %d]\n", ft_printf("%0100f", d)));
	printf("\n");
	STDminx(printf(" [std   0 minus: %d]\n", printf("%0f", d_minus)));
	MYminx(printf(" [my    0 minus: %d]\n", ft_printf("%0f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   0 w: %d]\n", printf("%0100f", d)));
	MYx(printf(" [my    0 w: %d]\n", ft_printf("%0100f", d)));
	printf("\n");
	STDminx(printf(" [std   0 w minus: %d]\n", printf("%0100f", d_minus)));
	MYminx(printf(" [my    0 w minus: %d]\n", ft_printf("%0100f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   0 w > p > len: %d]\n", printf("%0100.10f", d)));
	MYx(printf(" [my    0 w > p > len: %d]\n", ft_printf("%0100.10f", d)));
	printf("\n");
	STDx(printf(" [std   0 w > p < len: %d]\n", printf("%0100.1f", d)));
	MYx(printf(" [my    0 w > p < len: %d]\n", ft_printf("%0100.1f", d)));
	printf("\n");
	STDminx(printf(" [std   0 w > p < len minus: %d]\n", printf("%0100.1f", d_minus)));
	MYminx(printf(" [my    0 w > p < len minus: %d]\n", ft_printf("%0100.1f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   0 w > p > len: %d]\n", printf("%0100.10f", d)));
	MYx(printf(" [my    0 w > p > len: %d]\n", ft_printf("%0100.10f", d)));
	printf("\n");
	STDminx(printf(" [std   0 w > p > len minus: %d]\n", printf("%0100.10f", d_minus)));
	MYminx(printf(" [my    0 w > p > len minus: %d]\n", ft_printf("%0100.10f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   0 w < p: %d]\n", printf("%01.100f", d)));
	MYx(printf(" [my    0 w < p: %d]\n", ft_printf("%01.100f", d)));
	printf("\n");
	STDminx(printf(" [std   0 w < p minus: %d]\n", printf("%01.100f", d_minus)));
	MYminx(printf(" [my    0 w < p minus: %d]\n", ft_printf("%01.100f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   0 w < p: %d]\n", printf("%01.100f", d)));
	MYx(printf(" [my    0 w < p: %d]\n", ft_printf("%01.100f", d)));
	printf("\n");
	STDminx(printf(" [std   0 w < p minus: %d]\n", printf("%01.100f", d_minus)));
	MYminx(printf(" [my    0 w < p minus: %d]\n", ft_printf("%01.100f", d_minus)));
	printf("\n");
	printf("\n");
	printf("\n");
	STDx(printf(" [std   std w: %d]\n", printf("%100f", d)));
	MYx(printf(" [my    std w: %d]\n", ft_printf("%100f", d)));
	printf("\n");
	STDminx(printf(" [std   std w minus: %d]\n", printf("%100f", d_minus)));
	MYminx(printf(" [my    std w minus: %d]\n", ft_printf("%100f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std    w 0: %d]\n", printf("%0f", d)));
	MYx(printf(" [my    w 0: %d]\n", ft_printf("%0f", d)));
	printf("\n");
	STDminx(printf(" [std   w 0 minus: %d]\n", printf("%0f", d_minus)));
	MYminx(printf(" [my    w 0 minus: %d]\n", ft_printf("%0f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   w < len: %d]\n", printf("%1f", d)));
	MYx(printf(" [my    w < len: %d]\n", ft_printf("%1f", d)));
	printf("\n");
	STDminx(printf(" [std   w < len minus: %d]\n", printf("%1f", d_minus)));
	MYminx(printf(" [my    w < len minus: %d]\n", ft_printf("%1f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   w > len: %d]\n", printf("%100f", d)));
	MYx(printf(" [my    w > len: %d]\n", ft_printf("%100f", d)));
	printf("\n");
	STDminx(printf(" [std   w > len minus: %d]\n", printf("%100f", d_minus)));
	MYminx(printf(" [my    w > len minus: %d]\n", ft_printf("%100f", d_minus)));
	printf("\n");
	printf("\n");
	printf("\n");
	STDx(printf(" [std   w < p: %d]\n", printf("%10.100f", d)));
	MYx(printf(" [my    w < p: %d]\n", ft_printf("%10.100f", d)));
	printf("\n");
	STDminx(printf(" [std   w < p minus: %d]\n", printf("%10.100f", d_minus)));
	MYminx(printf(" [my    w < p minus: %d]\n", ft_printf("%10.100f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   w > p: %d]\n", printf("%100.10f", d)));
	MYx(printf(" [my    w > p: %d]\n", ft_printf("%100.10f", d)));
	printf("\n");
	STDminx(printf(" [std   w > p minus: %d]\n", printf("%100.9f", d_minus)));
	MYminx(printf(" [my    w > p minus: %d]\n", ft_printf("%100.9f", d_minus)));
	printf("\n");
	printf("\n");
	printf("\n");
	STDx(printf(" [std   p: %d]\n", printf("%.100f", d)));
	MYx(printf(" [my    p: %d]\n", ft_printf("%.100f", d)));
	printf("\n");
	STDminx(printf(" [std   p minus: %d]\n", printf("%.100f", d_minus)));
	MYminx(printf(" [my    p minus: %d]\n", ft_printf("%.100f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   p 0: %d]\n", printf("%.0f", d)));
	MYx(printf(" [my    p 0: %d]\n", ft_printf("%.0f", d)));
	printf("\n");
	STDminx(printf(" [std   p 0 minus: %d]\n", printf("%.0f", d_minus)));
	MYminx(printf(" [my    p 0 minus: %d]\n", ft_printf("%.0f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   p . : %d]\n", printf("%.f", d)));
	MYx(printf(" [my    p . : %d]\n", ft_printf("%.f", d)));
	printf("\n");
	STDminx(printf(" [std   p .  minus: %d]\n", printf("%.f", d_minus)));
	MYminx(printf(" [my    p .  minus: %d]\n", ft_printf("%.f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   p < len: %d]\n", printf("%.1f", d)));
	MYx(printf(" [my    p < len: %d]\n", ft_printf("%.1f", d)));
	printf("\n");
	STDminx(printf(" [std   p < len minus: %d]\n", printf("%.1f", d_minus)));
	MYminx(printf(" [my    p < len minus: %d]\n", ft_printf("%.1f", d_minus)));
	printf("\n");
	printf("\n");
	STDx(printf(" [std   p > len: %d]\n", printf("%.100f", d)));
	MYx(printf(" [my    p > len: %d]\n", ft_printf("%.100f", d)));
	printf("\n");
	STDminx(printf(" [std   p > len minus: %d]\n", printf("%.100f", d_minus)));
	MYminx(printf(" [my    p > len minus: %d]\n", ft_printf("%.100f", d_minus)));
	printf("\n");
	// printf("\n");
	// printf("\n");
	// STDx(printf(" [std   hh: %d]\n", printf("%hhf", (char)UCHAR_MAX)));
	// MYx(printf(" [my    hh: %d]\n", ft_printf("%hhf", UCHAR_MAX)));
	// printf("\n");
	// STDminx(printf(" [std   hh_minus: %d]\n", printf("%hhf", (char)CHAR_MIN)));
	// MYminx(printf(" [my    hh_minus: %d]\n", ft_printf("%hhf", CHAR_MIN)));
	// printf("\n");
	// printf("\n");
	// STDx(printf(" [std   h: %d]\n", printf("%hf", (short)USHRT_MAX)));
	// MYx(printf(" [my    h: %d]\n", ft_printf("%hf", USHRT_MAX)));
	// printf("\n");
	// STDminx(printf(" [std   h_minus: %d]\n", printf("%hf", (short)SHRT_MIN)));
	// MYminx(printf(" [my    h_minus: %d]\n", ft_printf("%hf", SHRT_MIN)));
	// printf("\n");
	// printf("\n");
	// STDx(printf(" [std   ll: %d]\n", printf("%llf", ULLONG_MAX)));
	// MYx(printf(" [my    ll: %d]\n", ft_printf("%llf", ULLONG_MAX)));
	// printf("\n");
	// STDminx(printf(" [std   ll_minus: %d]\n", printf("%llf", LLONG_MIN)));
	// MYminx(printf(" [my    ll_minus: %d]\n", ft_printf("%llf", LLONG_MIN)));
	// printf("\n");
	// printf("\n");
	STDx(printf(" [std   l: %d]\n", printf("%lf", (double)ULONG_MAX)));
	MYx(printf(" [my    l: %d]\n", ft_printf("%lf", (double)ULONG_MAX)));
	printf("\n");
	STDminx(printf(" [std   l_minus: %d]\n", printf("%lf", (double)LONG_MIN)));
	MYminx(printf(" [my    l_minus: %d]\n", ft_printf("%lf", (double)LONG_MIN)));
	printf("\n");
	STDx(printf(" [std   L: %d]\n", printf("%Lf", (long double)ULLONG_MAX)));
	MYx(printf(" [my   L: %d]\n", ft_printf("%Lf", (long double)ULLONG_MAX)));
	printf("\n");
	STDx(printf(" [std   L: %d]\n", printf("%Lf", (long double)LLONG_MAX)));
	MYx(printf(" [my   L: %d]\n", ft_printf("%Lf", (long double)LLONG_MAX)));
*/


	// double x;
	// x = 26537723487263847586153.7358354827543872425;
	// int i = 2;
	// while ((x /= 10) > 0.1)
	// 	printf("%d : %.100f\n", i++, x);
	// printf(" [ std: %d]\n", printf("%#1.o", 10));
	// ft_printf("\n");
	// printf(" [ my: %d]\n", ft_printf("%#1.o", 10));
	// printf(" [ std: %d]\n", ft_printf("@moulitest: %c", 0));
	// printf(" [ my : %d]\n", ft_printf("@moulitest: %10c", NULL, 0));
	// printf("@moulitest: %10c", 0);
	// ft_printf("@moulitest: %10c", 0);
	return (0);
}