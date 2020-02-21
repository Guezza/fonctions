#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a;
    int b;
    int c;
    printf("Bonjour, je suis Mejda, et je vais vous aider a resoudre votre equation quadratique/du seconde degre dans l'ensemble des reels.\n");
    printf("Donnez votre a: ");
    scanf("%d", &a);
    printf("Donnez votre b: ");
    scanf("%d", &b);
    printf("Donnez votre c: ");
    scanf("%d", &c);
    printf("Delta: %d", b*b -(4*a*c));

    if((b*b) -(4*a*c) = 0) {
        printf("Une seule solution: %f", -b / (2*a));
    }
    if((b*b) -(4*a*c) < 0) {
        printf("Ensemble vide");
    }
    if((b*b) -(4*a*c) > 0) {
        printf("x1: %f", (-b + sqrt(b*b -(4*a*c)))/(2*a));
        printf("x2: %f", (-b - sqrt(b*b -(4*a*c)))/(2*a));
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
