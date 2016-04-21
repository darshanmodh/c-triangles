//
// Created by Darshan Modh on 4/19/16.
//

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
 */
#include <stdio.h>

int main()
{
    int i,j,rows,temp;
    printf("How many rows? : ");
    scanf("%d", &rows);

    temp=rows;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=temp; j++)
        {
            printf("%d ",j);
        }
        temp--;
        printf("\n");
    }
}
