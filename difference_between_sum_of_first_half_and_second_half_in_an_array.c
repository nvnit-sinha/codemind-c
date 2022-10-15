#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<n/2;i++){
        sum1+=arr[i];
    }
    sum2=sum-sum1;
    cout<<sum2-sum1;
}