//
// Created by Darshan Modh on 4/19/16.
//
/*
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>

int main()
{
    int i,j,rows;
    printf("How many rows? : ");
    scanf("%d", &rows);
    for(i=rows; i>0; i--)
    {
        for(j=i; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

