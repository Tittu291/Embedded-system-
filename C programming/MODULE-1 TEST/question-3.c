#include<stdio.h>//third question print pyramid ?
int main()
{
    int n,i,t;
    printf("Enter the rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(t=1;t<=i;t++)
      {
        printf("*");
      }  
      printf("\n");
    }
return 0;

}