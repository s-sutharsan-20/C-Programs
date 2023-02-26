#include<stdlib.h>
main()
{
    int i,n,fact=1;
    printf("Enter The Number")
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial of %d is %d",n,fact);
}