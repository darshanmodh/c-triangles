//
// Created by Darshan Modh on 4/20/16.
//
//  pyramid

#include <stdio.h>

int main()
{
    int i,j,rows,space;
    printf("Number of rows? : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(space=1; space<(rows-i); space++)
        {
            printf("  ");
        }
    }
}
