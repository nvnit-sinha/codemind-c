#include<iostream>
using namespace std;
bool selfDividing(int n){
    int temp=n;

    while(n){
        int digit=n%10;
        if(digit !=0 && temp%digit==0){
            n/=10;
        }
        else
            return false;
    }
    return true;
}

void self_Sequence(int a,int b){
    for(int i=a;i<=b;i++){
        if(selfDividing(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    
    self_Sequence(a,b);

    return 0;
}