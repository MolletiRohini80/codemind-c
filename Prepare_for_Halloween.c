#include<stdio.h>
int main()
{
    int w,i;
    scanf("%d",&w);
    for(i=0;i<w;i++)
    {
    int x,y,a,b;
    scanf("%d%d",&a,&b);
    x=a*2;
    y=b*5;
    if(x>y)
    {
        printf("Chocolate
");
    }
    else if(x<y)
    {
        printf("Candy
");
    }
    else if(x=y)
    {
        printf("Either
");
    }
    }
}