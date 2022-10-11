#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    set<int>myset(s.begin(),s.end());
    if(s.size()==myset.size()){
        cout<<"Unique Number";
    }
    else
        cout<<"Not Unique Number";
    return 0;
}