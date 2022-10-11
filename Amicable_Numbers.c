#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n;
cin>>m;
int ndivisor=0,mdivisor=0;
for(int i=1;i<n;i++){
    if(n%i==0){
        ndivisor +=i;
    }
}


if(ndivisor == m){
    cout<<"Amicable";
}

else
    cout<<"Not Amicable";
    return 0;
    
}
