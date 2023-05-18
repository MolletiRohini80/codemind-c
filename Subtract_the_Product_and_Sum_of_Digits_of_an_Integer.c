#include<stdio.h>
int main()
{
    int n,s=0,i,p=1,x;
    scanf("%d",&n);
    for(;n>0;)
    {
        i=n%10;
        s=s+i;
        p=p*i;
        n=n/10;
    }
    x=p-s;
    printf("%d",x);
}