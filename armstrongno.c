#include <stdio.h>

int main() 
{
    int n,s=0,r,t;
    printf("Enter The Number\n");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+(r*r*r);
    }
    if(s==t)
    {
        printf("%d is Armstrong Number.",t);
    }
    else
    {
        printf("%d is Not a Armstrong Number.",t);
    }
}
