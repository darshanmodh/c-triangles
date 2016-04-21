//
// Created by Darshan Modh on 4/19/16.
//

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
 */
#include <stdio.h>

int main()
{
    int i,j,count,rows;
    printf("Enter number of rows? : ");
    scanf("%d", &rows);

    count=1;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}