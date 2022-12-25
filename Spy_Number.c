#include<stdio.h>
int main()
{
    int n,d,sum=0,m=1;
    scanf("%d",&n);
    while(n>0)
    {
      d=n%10;
      sum=sum+d;
      m=m*d;
      n=n/10;
    }
    if(sum==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}