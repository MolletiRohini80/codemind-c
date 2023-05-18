#include<stdio.h>
int main()
{
    int n,i;
    float c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=c+(1.0/i);
    }
    printf("%0.2f",c);
}