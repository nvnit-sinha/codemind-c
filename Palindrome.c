#include<stdio.h>
int main()
{
    int n,r,t,sum=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n/=10;
    }
    if(t==sum)
    printf("True");
    else
    printf("False");
    return 0;
}