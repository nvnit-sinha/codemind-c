#include<stdio.h>
int main()
{
    int i,n;
    int k=0;
    scanf("%d",&n);
    int a[20];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    if(a[i]%2!=0)
    k+=a[i];
    }
    printf("%d",k);
    return 0;
}