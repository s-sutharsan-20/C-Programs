#include <stdio.h>

int main() 
{
    int n,s=0,t,r;
    printf("Enter The Number :\n");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(s==t)
    {
        printf("The Number is Palindrome.");
    }
    else
    {
        printf("The Number is  Not a Palindrome.");
    }
}
