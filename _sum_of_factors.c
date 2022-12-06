#include<stdio.h>
int main()
{
    int n,i,s=0,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    {
        s=s+i;
        x=s-n;
    }
    }
    printf("%d",x);
}