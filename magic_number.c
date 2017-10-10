#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m,n,number=0;
    printf("choose a number between 1 to 50\n\n");
    printf("--------******Table 1******--------\n");
    printf("       1   3   5   7   9   11\n       13  15  17  19  21  23\n       25  27  29  31  33  35\n       37  39  41  43  45  47\n       49 ");
    printf("\nif your chosen number is in above list press 1 else press 0\n\n\n");
    scanf("%d",&i);
    if(i==1)
        number = 1 * 1;


    printf("--------******Table 2******--------\n");
    printf("       2   3   6   7   10  11\n       14  15  18  19  22  23\n       26  27  30  31  34  35\n       38  39  42  43  46  47\n       50 ");
    printf("\nif your chosen number is in above list press 1 else press 0\n\n\n");
    scanf("%d",&j);
    if(j==1)
        number = number + (2 * 1);


    printf("--------******Table 3******--------\n");
    printf("       4   5   6   7   12  13\n       14  15  20  21  22  23\n       28  29  30  31  36  37\n       38  39  44  45  46  47");
    printf("\nif your chosen number is in above list press 1 else press 0\n\n\n");
    scanf("%d",&k);
    if(k==1)
        number = number + (2 * 2);


    printf("--------******Table 4******--------\n");
    printf("       8   9  10  11  12  13\n       14  15  24  25  26  27\n       28  29  30  31  40  41\n       42  43  44  45  46  47");
    printf("\nif your chosen number is in above list press 1 else press 0\n\n\n");
    scanf("%d",&l);
    if(l==1)
        number = number + (2 * 4);

    printf("--------******Table 5******--------\n");
    printf("       16  17  18  19  20  21\n       22  23  24  25  26  27\n       28  29  30  31  48  49\n       50");
    printf("\nif your chosen number is in above list press 1 else press 0\n\n\n");
    scanf("%d",&m);
    if(m==1)
        number = number + (2 * 8);


    printf("--------******Table 6******--------\n");
    printf("       32  33  34  35  36  37\n       38  39  40  41  42  43\n       44  45  46  47  48  49  50");
     printf("\nif your chosen number is in above list press 1 else press 0\n\n\n");
    scanf("%d",&n);
    if(n==1)
        number = number + (2 * 16);
    printf("\n\nThe chosen number is %d\n",number);
    return 0;
}
