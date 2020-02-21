#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
Ma fonction
nom : demi_perimetre
je lui donne : trois côtés (a, b, c)
elle fait : elle divise le perimetre par deux
elle me retourne : elle donne le demi-perimetre

nomfonction( type_data parametres)

type_data : int ou bien double...
*/


/*
Ma fonction
nom : aire
je lui donne : trois côtés (a, b, c)
elle fait : elle applique la formule de Héron = sqrt(S(S-a)(S-b)(S-c)), S est le demi-périmètre
elle me retourne : mon argent en francs

nomfonction( type_data parametres)

type_data : int ou bien double...
*/


int main()
{
    int a;
    int b;
    int c;
    int
    printf("(^^:)(:)\n");
    printf("---- /¦|||¦\<>>\\-/-+()/&%*\n");
    printf("Bonjour, je suis Mejda et je vais vous aider a trouver l'aire de votre triangle quelconque en ayant tous ses cotes, donc le theoreme de Heron.\n");

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    printf("demi-perimetre:", ((a+b+c)/2)*((a+b+c)-a)*((a+b+c)-b)*((a+b+c)-c));
    return 0;
}
/*double conversion(double euros)
{
     double francs = 0;

    francs = 6.55957 * euros;
    return francs;
}*/
