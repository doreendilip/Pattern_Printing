/*Exercise on Operators*/


#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int dob,i,I,k;
    char s;
    int bin[50];
    printf("Enter DOB without space : ");
    scanf("%d",&dob);

    /*To Binary*/

    for(i = 0; dob>0; i++){
        bin[i] = dob%2;
        dob = (int)dob/2;
    }
    printf("Binary = ");
    I = i;
    for(i = i-1; i>=0; i--){
        printf("%d",bin[i]);
    }

    /*Inverse bits*/

    int j;

    printf("\nInversed Binary = ");
    for(j = 0; j<I; j++){
        printf("%d",bin[j]);
    }

    /*To Decimal*/

    printf("\nDecimal of inversed binary = ");

    char buff[50];
    int n;
    int binary_num, decimal_num = 0, base = 1, rem;

    for (j=0; j<I; j++) {
        sprintf(&buff[j],"%d",bin[j]);
    }
    n = atoi(buff);
    binary_num = n;

    while ( n > 0)
    {
        rem = n % 10;
        decimal_num = decimal_num + rem * base;
        n = n / 10;
        base = base * 2;
    }

    printf("%d",decimal_num);

    /*Divide by 2*/

    printf("\nDecimal number/2 = ");

    int df;

    df = decimal_num/2;

    printf("%d",df);

    /*Duplicating digits*/

    printf("\nFINAL PASSWORD IS : ");

    char buff1[50];
    int pf;

    sprintf(buff1,"%d%d",df,df);
    pf = atoi(buff1);


    printf("%d",pf);


    return 0;
}

