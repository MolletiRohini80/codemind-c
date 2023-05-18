#include<stdio.h>
int main()
{
    int m,n,r,x,t,s,rem;
    scanf("%d",&n);
    start:
    m=n;
    r=0;
    while(m>0)
    {
        rem=m%10;
        r=r*10+rem;
        m=m/10;
    }
    s=r+n;
    t=s;
    x=0;
    while(t>0)
    {
        x=x*10+(t%10);
        t=t/10;
    }
    if(s==x)
    {
        printf("%d",s);
    }
    else
    {
        n=s;
        goto start;
    }
}