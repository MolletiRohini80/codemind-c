#include<stdio.h>
int main()
{
    int a,b,s,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        s=a*i;
        printf("%d x %d = %d
",a,i,s);
    }
    
}