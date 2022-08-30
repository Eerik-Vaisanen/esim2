#include <stdio.h>
#include <limits.h>

int main()
{
    int x=55;
    int y=45;
    int imax=INT_MAX;
    printf("Muuttujan x arvo=%d\n",x);
    printf("Muuttujan x muistipaikan osoite=%d\n",&x);
    printf("Muuttujan y arvo=%d\n",y);
    printf("Muuttujan y muistipaikan osoite=%d\n",&y);

    printf("Suurin kokonaisluku on %d\n",imax);

    return 0;
}
