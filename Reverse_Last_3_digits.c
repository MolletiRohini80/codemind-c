#include<stdio.h>
int main()
{
    int r,t,z=0,w,b,q;
    scanf("%d",&q);
        r=q%1000;
        t=q/1000;
    w=r;
    while(w!=0)
    {
        b=w%10;
        z=z*10+b;
        w=w/10;
    }
    printf("%d%d",t,z);
}