/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_color.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:49:02 by ydang             #+#    #+#             */
/*   Updated: 2016/11/18 13:22:09 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pikachu.h"

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

void	test_color(void)
{
	/*printf("%sred\n", KRED);
	printf("%sgreen\n", KGRN);
	printf("%syellow\n", KYEL);
	printf("%sblue\n", KBLU);
	printf("%smagenta\n", KMAG);
	printf("%scyan\n", KCYN);
	printf("%swhite\n", KWHT);
	printf("%snormal\n", KNRM);*/
	printf("⁜--------------------------------------------------------------------------------------⁜\n");
	//-----------1stLine-----------
	printf("|  %s████████", KNRM);
	printf("                                                                  ");
	printf("%s████████  |\n", KNRM);
	//-----------2ndLine-----------
	printf("|  %s██████████████", KNRM);
	printf("                                                      ");
	printf("%s██████████████  |\n", KNRM);
	//-----------3rdLine-----------
	printf("|  %s██████████████████", KNRM);
	printf("                                              ");
	printf("%s██████████████████  |\n", KNRM);
	//-----------4thLine-----------
	printf("|  %s████████████", KNRM);
	printf("%s██████", KYEL);
	printf("%s██", KNRM);
	printf("                                          ");
	printf("%s██", KNRM);
	printf("%s██████", KYEL);
	printf("%s████████████  |\n", KNRM);
	//-----------5thLine-----------
	printf("|  %s████████████", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("                                      ");
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s████████████  |\n", KNRM);
	//-----------6thLine------------
	printf("|  %s██████████", KNRM);
	printf("%s████████████", KYEL);
	printf("%s██", KNRM);
	printf("                                  ");
	printf("%s██", KNRM);
	printf("%s████████████", KYEL);
	printf("%s██████████  |\n", KNRM);
	//-----------7thLine------------
	printf("|    ");
	printf("%s████████", KNRM);
	printf("%s██████████████", KYEL);
	printf("%s██", KNRM);
	printf("    ");
	printf("%s██████████████████████", KNRM);
	printf("    ");
	printf("%s██", KNRM);
	printf("%s██████████████", KYEL);
	printf("%s████████", KNRM);
	printf("    |\n");
	//-----------8thLine------------
	printf("|    ");
	printf("%s████████", KNRM);
	printf("%s████████████████", KYEL);
	printf("%s████", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s████", KNRM);
	printf("%s████████████████", KYEL);
	printf("%s████████", KNRM);
	printf("    |\n");
	//-----------9thLine------------
	printf("|      ");
	printf("%s██████", KNRM);
	printf("%s████████████", KYEL);
	printf("%s████", KNRM);
	printf("%s██████████████████████████████", KYEL);
	printf("%s████", KNRM);
	printf("%s████████████", KYEL);
	printf("%s██████", KNRM);
	printf("      |\n");
	//-----------10thLine-----------
	printf("|      ");
	printf("%s██████", KNRM);
	printf("%s██",KWHT);
	printf("%s██████████████████████████████████████████████████████████", KYEL);
	printf("%s██", KWHT);
	printf("%s██████", KNRM);
	printf("      |\n");
	//-----------11thLine-----------
	printf("|        ");
	printf("%s████", KNRM);
	printf("%s████", KWHT);
	printf("%s██████████████████████████████████████████████████████", KYEL);
	printf("%s████", KWHT);
	printf("%s████", KNRM);
	printf("        |\n");
	//-----------12thLine-----------
	printf("|          ");
	printf("%s██", KNRM);
	printf("%s██████", KWHT);
	printf("%s██", KNRM);
	printf("%s██████████████████████████████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████", KWHT);
	printf("%s██", KNRM);
	printf("          |\n");
	//-----------13thLine-----------
	printf("|            ");
	printf("%s██████", KNRM);
	printf("%s██████████████████████████████████████████████████", KYEL);
	printf("%s██████", KNRM);
	printf("            |\n");
	//-----------14thLine-----------
	printf("|              ");
	printf("%s██", KNRM);
	printf("%s██████████████████████████████████████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("              |\n");
	//-----------15thLine-----------
	printf("|              ");
	printf("%s██", KNRM);
	printf("%s██████████████████████████████████████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("              |\n");
	//-----------16thLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s██████████████████████████████████████████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------17thLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s██████████████████████████████████████████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------18thLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s████████", KNRM);
	printf("%s██████████████████████████", KYEL);
	printf("%s████████", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------19thLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s██████", KYEL);
	printf("%s██████", KNRM);
	printf("%s██", KWHT);
	printf("%s████", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s████", KNRM);
	printf("%s██", KWHT);
	printf("%s██████", KNRM);
	printf("%s██████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------20thLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s████", KYEL);
	printf("%s██████", KNRM);
	printf("%s██████", KWHT);
	printf("%s██", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████", KWHT);
	printf("%s██████", KNRM);
	printf("%s████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------21stLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s████", KYEL);
	printf("%s████████", KNRM);
	printf("%s████", KWHT);
	printf("%s██", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("%s████", KWHT);
	printf("%s████████", KNRM);
	printf("%s████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------22ndLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s████", KYEL);
	printf("%s██████████████", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s██████████████", KNRM);
	printf("%s████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------23rdLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s████", KYEL);
	printf("%s██████████████", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s██████████████", KNRM);
	printf("%s████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------24thLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s██████", KYEL);
	printf("%s██████████", KNRM);
	printf("%s██████████", KYEL);
	printf("%s██████", KNRM);
	printf("%s██████████", KYEL);
	printf("%s██████████", KNRM);
	printf("%s██████", KYEL);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------25thLine-----------
	printf("|          ");
	printf("%s██", KNRM);
	printf("%s██████████████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("          |\n");
	//-----------26thLine-----------
	printf("|          ");
	printf("%s██", KNRM);
	printf("%s██", KYEL);
	printf("%s████████████", KNRM);
	printf("%s██████████████████████████████████", KYEL);
	printf("%s████████████", KNRM);
	printf("%s██", KYEL);
	printf("%s██", KNRM);
	printf("          |\n");
	//-----------27thLine-----------
	printf("|          ");
	printf("%s████", KNRM);
	printf("%s██████████", KRED);
	printf("%s██", KNRM);
	printf("%s██████", KYEL);
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████", KRED);
	printf("%s████", KNRM);
	printf("          |\n");
	//-----------28thLine-----------
	printf("|          ");
	printf("%s██", KNRM);
	printf("%s██████████████", KRED);
	printf("%s██", KNRM);
	printf("%s██████", KYEL);
	printf("%s████████", KNRM);
	printf("%s██", KMAG);
	printf("%s████████", KNRM);
	printf("%s██████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████████", KRED);
	printf("%s██", KNRM);
	printf("          |\n");
	//-----------29thLine-----------
	printf("|          ");
	printf("%s██", KNRM);
	printf("%s██████████████", KRED);
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████", KMAG);
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████████", KRED);
	printf("%s██", KNRM);
	printf("          |\n");
	//-----------30thLine-----------
	printf("|          ");
	printf("%s██", KNRM);
	printf("%s██████████████", KRED);
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████", KMAG);
	printf("%s██", KNRM);
	printf("%s████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████████", KRED);
	printf("%s██", KNRM);
	printf("          |\n");
	//-----------31stLine-----------
	printf("|          ");
	printf("%s██", KNRM);
	printf("%s████████████", KRED);
	printf("%s██", KNRM);
	printf("%s██████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████", KMAG);
	printf("%s██", KNRM);
	printf("%s██████████", KYEL);
	printf("%s██", KNRM);
	printf("%s████████████", KRED);
	printf("%s██", KNRM);
	printf("          |\n");
	//-----------32ndLine-----------
	printf("|            ");
	printf("%s██", KNRM);
	printf("%s██████████", KRED);
	printf("%s██", KNRM);
	printf("%s██████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████", KMAG);
	printf("%s██", KNRM);
	printf("%s██████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████████", KRED);
	printf("%s██", KNRM);
	printf("            |\n");
	//-----------33rdLine-----------
	printf("|              ");
	printf("%s██████████", KNRM);
	printf("%s██████████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██████", KMAG);
	printf("%s██", KNRM);
	printf("%s██████████████", KYEL);
	printf("%s██████████", KNRM);
	printf("              |\n");
	//-----------34thLine-----------
	printf("|                ");
	printf("%s██", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("%s██", KMAG);
	printf("%s██", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("                |\n");
	//-----------35thLine-----------
	printf("|                  ");
	printf("%s████", KNRM);
	printf("%s████████████████████", KYEL);
	printf("%s██", KNRM);
	printf("%s████████████████████", KYEL);
	printf("%s████", KNRM);
	printf("                  |\n");
	//-----------36thLine-----------
	printf("|                      ");
	printf("%s████", KNRM);
	printf("%s██████████████████████████████████", KYEL);
	printf("%s████", KNRM);
	printf("                      |\n");
	//-----------37thLine-----------
	printf("|                          ");
	printf("%s██████", KNRM);
	printf("%s██████████████████████", KYEL);
	printf("%s██████", KNRM);
	printf("                          |\n");
	//-----------38thLine-----------
	printf("|                                ");
	printf("%s██████████████████████", KNRM);
	printf("               %sBY YIXUAN_DANG@42%s|\n", KBLU, KNRM);
	//------------------------------
	printf("⁜--------------------------------------------------------------------------------------⁜\n");
	return ;
}
