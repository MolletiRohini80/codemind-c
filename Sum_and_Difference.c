#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    float e,f,g,h;
    scanf("%f%f",&e,&f);
    c=a+b;
    d=a-b;
    g=e+f;
    h=e-f;
    printf("%d %d
",c,d);
    printf("%.1f %.1f",g,h);
}