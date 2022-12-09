#include<stdio.h>
int main()
{
    int u,c;
    scanf("%d",&u);
    if(u<=199)
    c=1.20*u;
    else if(u>200&&u<400)
    c=1.50*u;
    else if(u>400&&u<600)
     c=1.80*u;
    else if(u>=600)
    c=2*u;
    float sr;
    if(c>400)
      sr=.15*c;
    else
      sr=100;
    float b;
    b=c+sr;
    printf("%.2f",b);
}