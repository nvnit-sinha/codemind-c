#include<stdio.h>
int main()
{
    int l,r,k;
    scanf("%d%d%d",&l,&r,&k);
    int n=0,i;
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        n++;
    }
    printf("%d",n);
    return 0;
}