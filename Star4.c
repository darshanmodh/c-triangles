//
// Created by Darshan Modh on 4/19/16.
//
/*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
*/

#include <stdio.h>

int main() {
    int i, j, rows, space;
    printf("How many Rows? : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 0; space <= (rows - i + 1); space++) {
            printf("  ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
}