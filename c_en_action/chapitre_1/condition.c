/* LES CONDITIONS
 *
 * IF / ELSE IF / ELSE ==> si / sinon si / sinon
 * la solution la plus utilisé en theme de condition d'execution.
 * on peut ne pas mettre d'accolade si le block n'est que de une ligne et si il n'y a pas de 
 * confli avec un autre else.
 *
 * SWITCH / CASE 1 / CASE 2 / DEFAULT ==> soit le : cas 1 ou cas 2 ou cas 3 sinon le defaut
 * utile pour faire un menu, mais peu recommendé dans une fonction
 *
 * EXPRESSION ? VALEUR 1 : VALEUR 2 ==> expresion si valide valeur 1 sinon valeur 2
 * On utilise souvent la condition ternaire si notre condition est simple et tiens sur une ligne.
 * Et seulement si on veut recevoir une valeur en fonction de l'expression. pas de block d'instruction.
 *
 */

#include <stdio.h>

int	main(int argc, char **argv)
{
  printf("bienvenu dans le switch\n");
  switch (argc)
  {
  	case 1 :
	  printf("zero argument\n");
	  break;
  	case 2 :
	  if (argv[1][0] == 't')
	    printf("vous avez saisie test ?\n");
	  else if (argv[1][0] == 'a')  
	    printf("vous avez saisie autre ?\n");
	  else
	    printf("vous avez mal saisie\n");
	  break;
  	default :
	  printf("le nombre argument est trop grand\n");
  }
  return (0);
}
