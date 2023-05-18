#include<stdio.h>
int main()
{
    int m,n,i,d,t,s;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        t=i;
        s=0;
        while(t)
        {
            d=t%10;
            t=t/10;
            s=s*10+d;
        }
        if(s==i)
        {
            printf("%d ",s);
        }
    }
}