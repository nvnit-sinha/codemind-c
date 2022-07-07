#include<stdio.h>
int main(){
    int n,l=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k){
            l=1;
        }
    }
    if(l==1)
    printf("True");
    else
    printf("False");
    return 0;
}