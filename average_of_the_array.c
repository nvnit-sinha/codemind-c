#include<stdio.h>
int main(){
    int n;
    int sum;
    float av=0;
    int temp=n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    av=(float)sum/n;
    printf("%.2f",av);
    return 0;
    
}