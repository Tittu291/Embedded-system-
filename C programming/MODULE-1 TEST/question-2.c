#include<stdio.h>
void printBin(int n)
  int i,mask;
  for(i=255;i>=0;i--)
  {
   mask=1<<i;
   if(n & mask)
   printf("1");
   else
   printf("0");
  }
  printf("\n");
}

void setbit(int i) //to set the bit
{
int mask=1<<i;
n=n|mask;
printBin(n);
}
void clearbit(int i)//clear thr bit
{
int mask=~(1<<i;
n=n&mask;
printBin(n);
}
int main()
{
    setbit(2);
    clearbit(5);
    return 0;
} 