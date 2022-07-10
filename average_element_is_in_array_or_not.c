#include<stdio.h>
int main(){
    int n,k=0;
    int sum=0;
    float avg=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    avg=(float)(sum/n);
    for(int i=0;i<n;i++){
        if(avg==a[i])
        k=1;
    }
    if(k==1)
    printf("True");
    else
    printf("False");
    return 0;
}