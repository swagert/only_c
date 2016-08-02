/* PRINTF
 * Le format s'ecrit : % [attributs] [largeur minimal de champ] [.précision] [modificateur de longeur] [indicateur de conversion]
 *
 * ATTRIBUT
 * - # : inconnu pour le moment
 * - 0 : inconnu pour le moment
 * - - : justifie l'affichage à gauche
 * -   : (espace) si le nombre est positif , il sera précédé d'un caractere espace
 * - + : si le nombre est positif, il sera précédé d'un caractere +
 *
 * LARGEUR MINIMAL
 * on peut voir sur l'exemple qu'un nombre superieur au minimal ne sera impacté par celui ci mais si il est plus petit alors,
 * on ajoutera des espace devant.
 * Il existe de methode, on peux le mettre entre le % et attribut en numerique ou il est possible de mettre une * et donner la
 * valeur apres la virgule.
 *
 * .PRECISION permet de donner le nombre de chiffre nous voulons afficher apres la virgule. Il existe les deux meme methode que
 * pour la largeur minimal.
 *
 * MODIFICATEUR DE LONGEUR
 * ____________________________________________________________________________________
 * | TYPE DE L'ARGUMENT                                   |  MODIFICATEUR DE LONGEUR  |
 * |______________________________________________________|___________________________|
 * | char / unsigned char                                 | hh                        |
 * |______________________________________________________|___________________________|
 * | short int / unsigned short int                       | h                         |
 * |______________________________________________________|___________________________|
 * | long int / unsigned long int                         | l                         |
 * |______________________________________________________|___________________________|
 * | long long int / unsigned long long int               | ll                        |
 * |______________________________________________________|___________________________|
 * | long double                                          | L                         |
 * |______________________________________________________|___________________________|
 * | wint_t                                               | l                         |
 * |______________________________________________________|___________________________|
 * | wchar_t                                              | l                         |
 * |______________________________________________________|___________________________|
 * | intmax_t                                             | j                         |
 * |______________________________________________________|___________________________|
 * | uintmax_t                                            | j                         |
 * |______________________________________________________|___________________________|
 * | size_t                                               | z                         |
 * |______________________________________________________|___________________________|
 * | ssize_t                                              | z                         |
 * |______________________________________________________|___________________________|
 * | ptrdiff_t                                            | t                         |
 * |______________________________________________________|___________________________| 
 *
 * INDICATEUR DE CONVERSION
 * ________________________________________________________________________________________________________________________________
 * | AFFICHAGE           | INDICATEUR DE CONVERSION    | SIGNIFICATION                               | IMPACT DE L'ATTRIBUT #     |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | entier décimal      | d ou i                      | conversion en nombre décimal signé          | aucun                      |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | entier décimal      | u                           | conversion en nombre décimal non signé      | aucun                      |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | entier octal        | o                           | conversion en nombre octal non signé        | Préfixé par 0              |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | entier hexadecimal  | x  et X                     | conversion en nombre hexadecimal non signé .| préfixé par 0x pour x et   |
 * |                     |                             | Les lettres sont en minuscules avec x et en | 0X pour X                  |
 * |                     |                             | majuscules avec X.                          |                            |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | réel                | e et E                      | conversion d'un double en réel avec la nota | Ajoute un point décimal    |
 * |                     |                             | -tion scientifique [-]x.xxxe(+-)xx avec e   | même si aucun décimal ne   |
 * |                     |                             | et [-]x.xxxE(+-)xx avec E.                  | suit.                      |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | réel                | f et F                      | conversion d'un double en réel avec la nota | Ajoute un point décimal    |
 * |                     |                             | -tion scientifique [-]x.xxxx la précision   | même si aucun décimal ne   |
 * |                     |                             | par defaut est de 6 decimale mais peut etre | suit.                      |
 * |                     |                             | changée par l'indicateur de precision.      |                            |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | réel                | g et G                      | conversion d'un double en réel. Equivqlente | Ajoute un point décimal    |
 * |                     |                             | à une conversion f si l'exposant est sup    | même si aucun décimal ne   |
 * |                     |                             | -erieur ou egal à -4 ou inferieur à la pre  | suit                       |
 * |                     |                             | -cision. sinon c'est une conversion e. le   |                            |
 * |                     |                             | point decimal n'est pas affiché s'il n'est  |                            |
 * |                     |                             | pas suivi de décimales.                     |                            |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | réel héxadécimal    | a et A                      | conversion d'un double en réel hexadecimal  | Ajoute un point décimal    |
 * |                     |                             | avec la notation [-]0xh.hhhp(+-)d avec a et | même si aucun décimal ne   |
 * |                     |                             | [-]0XH.HHHP(+-)D avec A                     | suit. les 0 sont conservés |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | caractere           | c                           | conversion en caractere                     | aucun                      |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | chaine de caractere | s                           | conversion en chaine de caracteres          |                            |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | pointeur            | p                           | conversion d'un pointeur de type void * en  | aucun                      |
 * |                     |                             | nombre hexadecimal                          |                            |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * | litteral            | %                           | le caractere % est recopié tel quel. Un car | aucun                      |
 * |                     |                             | -actere de % seul indiquant une conversion, |                            |
 * |                     |                             | il faut le doubler (%%) pour en afficher un.|                            |
 * |_____________________|_____________________________|_____________________________________________|____________________________|
 * 
 */


#include <stdio.h>
#define PI -3.141592

int	main(void)
{
  int	nb1;
  int	nb2;
  char	*string;
  char	caractere;

  nb1 = 29;
  nb2 = 1029;
  string = "test de string";
  caractere = 'a';

  printf("\nexemple de largeur minimal\n");
  printf("pour un minimal de 0 nb1 = %0d et nb2 = %0d\n", nb1, nb2);
  printf("pour un minimal de 2 nb1 = %2d et nb2 = %2d\n", nb1, nb2);
  printf("pour un minimal de 4 nb1 = %4d et nb2 = %4d\n", nb1, nb2);
  printf("pour un minimal de 5 nb1 = %5d et nb2 = %5d\n", nb1, nb2);
  printf("\nexemple de largeur minimal avec *\n");
  printf("pour un minimal de 0 nb1 = %*d et nb2 = %*d\n", 0, nb1, 0, nb2);
  printf("pour un minimal de 2 nb1 = %*d et nb2 = %*d\n", 2, nb1, 2, nb2);
  printf("pour un minimal de 4 nb1 = %*d et nb2 = %*d\n", 4, nb1, 4, nb2);
  printf("pour un minimal de 5 nb1 = %*d et nb2 = %*d\n", 5, nb1, 5, nb2);
  printf("\nexemple de .précision\n");
  printf("pour pi précision 2 pi = %.2f\n", PI);
  printf("pour pi précision 4 pi = %.4f\n", PI);
  printf("\nexemple de .précision avec *\n");
  printf("pour pi précision 2 pi = %.*f\n", 2, PI);
  printf("pour pi précision 4 pi = %.*f\n", 4, PI);
  printf("\nexemple d'indicateur de conversion\n");
  printf("pour d avec nb1 ==> %d\n", nb1);
  printf("pour i avec nb1 ==> %d\n", nb1);
  printf("pour u avec nb1 ==> %u\n", nb1);
  printf("pour o avec nb1 ==> %o\n", nb1);
  printf("pour o avec nb1 et # ==> %#o\n", nb1);
  printf("pour x avec nb1 ==> %x\n", nb1);
  printf("pour X avec nb1 ==> %X\n", nb1);
  printf("pour X avec nb1 et # ==> %#X\n", nb1);
  printf("pour e avec PI ==> %e\n", PI);
  printf("pour E avec PI ==> %E\n", PI);
  printf("pour E avec PI et # ==> %#E\n", PI);
  printf("pour f avec PI ==> %f\n", PI);
  printf("pour F avec PI ==> %F\n", PI);
  printf("pour F avec PI et # ==> %#F\n", PI);
  printf("pour g avec PI ==> %g\n", PI);
  printf("pour G avec PI ==> %G\n", PI);
  printf("pour G avec PI et # ==> %#G\n", PI);
  printf("pour a avec PI ==> %a\n", PI);
  printf("pour A avec PI ==> %A\n", PI);
  printf("pour A avec PI et # ==> %#A\n", PI);
  printf("pour c avec caractere ==> %c\n", caractere);
  printf("pour s avec string ==> %s\n", string);
  printf("pour p avec string ==> %p\n", string);
  return (0);
}
