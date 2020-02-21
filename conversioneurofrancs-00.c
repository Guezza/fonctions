
/*
Ma fonction
nom : conversion
je lui donne : une quantité d'argent en euro
elle fait : elle multiplie ma quantité d'argent en euro avec le taux bancaire de la monnaie
elle me retourne : mon argent en francs
*/

double conversion(double euros)
{
     double francs = 0;

    francs = 6.55957 * euros;
    return francs;
}


/*  LE PROGRAMME PRINCIPYAL  */
/* ----------------------*/
int main(int argc, char *argv[])
{
    printf("10 euros = %f F\n", conversion(10));
    printf("50 euros = %f F\n", conversion(50));
    printf("100 euros = %f F\n", conversion(100));
    printf("200 euros = %f F\n", conversion(200));

    return 0;
}
