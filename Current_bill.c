#include<stdio.h>
int main()
{
    int n,c;
    float sr,b;
    scanf("%d",&n);
    if(n<=199)
    c=1.20*n;
    else if(200<n&&n<400)
    c=1.50*n;
    else if(n>400&&n<600)
    c=1.80*n;
    else if(n>=600)
    c=2.00*n;
    if(c>400)
    sr=.15*c;
    else 
    sr=100;
    b=c+sr;
    printf("%.2f",b);
    
}