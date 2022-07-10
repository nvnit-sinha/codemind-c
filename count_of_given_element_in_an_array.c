#include<stdio.h>
int main(){
    int n;
    int sudhanshu;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k)
        sudhanshu++;
    }
    printf("%d",sudhanshu);
}