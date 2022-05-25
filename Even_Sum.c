#include<stdio.h>
int main()
{
    int n;
    int k=0;
    scanf("%d",&n);
    int a[20];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        k+=a[i];
    }
    printf("%d",k);
}