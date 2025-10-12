#include <stdio.h>

int main() 
{
    int n, i, y, gap;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
     {
        for(gap = i; gap < n; gap++) //print space
        {
            printf(" ");
        }
        for(y = 1; y <= (2*i - 1); y++)//print stars
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
