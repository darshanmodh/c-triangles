//
// Created by Darshan Modh on 4/19/16.
//
/*
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
H H H H H H H H
 */

#include <stdio.h>

int main()
{
    int i,j;
    char last, temp='A';
    printf("How many rows? : ");
    scanf("%c", &last);

    for(i=1; i<=(last-'A'+1); i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", temp);
        }
        temp++;
        printf("\n");
    }
}

