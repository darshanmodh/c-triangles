//
// Created by Darshan Modh on 4/19/16.
//
/*
*
* *
* * *
* * * *
* * * * *
*/

#include<stdio.h>

int main()
{
    int i,j, rows;
    printf("How many rows? : ");
    scanf("%d", &rows);
    for(i=0; i<rows; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

