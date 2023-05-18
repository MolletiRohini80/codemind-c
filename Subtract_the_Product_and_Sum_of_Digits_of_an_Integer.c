#include<stdio.h>
int main()
{
    int n,s=0,p=1,l,x;
    scanf("%d",&n);
    for(;n>0;)
    {
        l=n%10;
        s=s+l;
        p=p*l;
        n=n/10;
    }
    x=p-s;
    printf("%d",x);
}