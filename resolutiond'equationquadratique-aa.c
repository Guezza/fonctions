#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

int main ()
{
    double a;
    double b;
    double c;
/*
    int D;
    printf("Saisir le coefficient D : ");
    scanf("%d", &D);

    if (D == 0) { printf("D est NUL    \n", D); };
    if (D < 0) { printf("D est NEGATIF \n", D) ;};
    if (D > 0) { printf("D est POSITIF \n", D) ;};
*/

    printf("--------\n ");
    printf("   Bonjour, je suis Mejda, et je vais vous aider a resoudre votre equation quadratique/du seconde degre dans l'ensemble des reels.\n");
    printf("   Donnez votre a: ");
    scanf("   %f", &a);
    printf("   Donnez votre b: ");
    scanf("   %f", &b);
    printf("   Donnez votre c: ");
    scanf("   %f", &c);
    printf("  Delta: %f\n", b*b -(4*a*c));

    if((b*b) -(4*a*c) == 0) {
        printf("  Une seule solution: %f\n", -b / (2*a));
    }
    if((b*b) -(4*a*c) < 0) {
        printf("  Ensemble vide\n");
    }
    if((b*b) -(4*a*c) > 0) {
        printf("   x1: %f\n", (-b + sqrt(b*b -(4*a*c)))/(2*a));
        printf("   x2: %f\n", (-b - sqrt(b*b -(4*a*c)))/(2*a));
    }
/*printf("Answer: %d", num1+num2);*/
/*Delta = b au carré - 4ac*/
/*printf("15 * 15 = %f\n", 15 *);*/
   /* if(guessCount < guessLimit) {
            printf("Enter a number: ");j
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }*/
    return 0;
}
/*à 9:52*/
