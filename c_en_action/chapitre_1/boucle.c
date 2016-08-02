/* LES BOUCLES
 *
 * ATTENTION
 * Une boucle peut creer une boucle infini, PENSER à incrementer ou creer une instruction qui change l'etat de la condition.
 *
 * WHILE ==> tant que
 * La boucle while s'execute tant que la condition ext vrai.
 *
 * DO WHILE ==> tant que
 * la boucle while est differente de while car elle s'execute au moin une fois. Le test de condition se fait à la fin de la
 * boucle et non au debut.
 *
 * FOR ==> jusqu'a
 * La boucle for est tres pratique pour parcourir un tableau ou toute autre liste. On retrouve la declaration la condition et
 * l'incrementation. Donc seul une condition qui se decremente ou s'incremente est acceptable dans un for.
 *
 * BREAK ==> stop
 * C'est une instruction quipermet a la boucle de s'arreter. Comme pour le suitch break arrete le block dans le quel on est
 * pour passer au suivant.
 *
 * CONTINUE ==> continue
 * C'est une instruction pratique pour effectuer un test sur un resultat et continue à boucler. Continue demande de stoper la
 * lecture des instructions suivantes et de reboucler.
 *
 *
 * INFO EN PLUS
 * Avec un test de 2 arguments ce code s'execute sans probleme nais si je met le break dans le for et le contine dans le do
 * while il y aura un probleme avec le do while IDEE ? Et bien le i de do while ne s'incrementerait jamais alors que dans le
 * a chaque tour il prend plus 1.
 *
 */

#include <stdio.h>

int	main(int argc, char **argv)
{
  int	i;

  i = 0;
  while (i < argc)
  {
    printf("argument %d => %s\n", i, argv[i]);
    i++;
  }

  i = 0;
  do
  {
    if (i == 2)
    {
      printf("coucou je suis un break\n");
      break;
    }
    printf("argument %d => %s\n", i, argv[i]);
    i++;
  }
  while (i < argc);

  for (i = 0; i < argc; i++)
  {
    printf("argument %d => %s\n", i, argv[i]);
    if (i == 1)
    {
      printf("coucou je suis un continue\n");
      continue;
    }
  }


  return (0);
}
