#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i%2!=0)
        {
            n=a*i;
        printf("%d x %d = %d
",a,i,n);
        }
    }
}