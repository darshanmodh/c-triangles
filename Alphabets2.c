//
// Created by Darshan Modh on 4/19/16.
//
/*
A
B C
D E F
G H I J
K L M N O
P Q R S T U
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
            temp++;
        }
        printf("\n");
    }
}
