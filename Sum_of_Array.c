#include<stdio.h>
int main()
{
    int n;
    int i;
    int sum=0;
    scanf("%d",&n);
    int a[20];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    sum=sum+a[i];
    printf("%d",sum);
}