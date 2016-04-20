//
// Created by Darshan Modh on 4/19/16.
//

#include <stdio.h>

int main()
{
    int i,j,k,rows,space;
    printf("Maximum star in row? : ");
    scanf("%d", &rows);

    space = rows/2+1;
    for(i=1; i<=rows/2+1; i++)
    {
        for(k=1; k<space; k++)
        {
            printf("  ");
        }
        space--;
        for(j=1; j<=(2*i-1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    space+=2;
    for(i=1; i<=rows/2; i++)
    {
        for(k=1; k<space; k++)
        {
            printf("  ");
        }
        space++;
        for(j=rows-2; j>=(2*i-1); j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
        *
      * * *
    * * * * *
      * * *
        *
*/
