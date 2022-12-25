#include<stdio.h>
int main()
{
    int n,r,s=0,p=1,t;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
        p=p*r;
    }
    t=p-s;
    printf("%d",t);
}