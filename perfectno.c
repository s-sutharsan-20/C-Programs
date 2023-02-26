#include <stdio.h>

int main() 
{
    int i,n,s=0;
    printf("Enter the Number :\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s==n)
    {
        printf("The Number is Perfect Number");
    }
    else
    {
        printf("The Number is not a Perfect Number");
    }
}
