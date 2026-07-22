#include<bits/stdc++.h>
using namespace std;


int main(){
    int n =5;
    vector<int> namess ;
    for(int i =0;i<n;i++){
        int t;
        cin>>t;
        namess.push_back(t);
    }
    cout<<namess[0]<<endl;
    cout<<namess.back()<<endl;
    cout<<namess.at(0)<<endl;
    cout<<namess[namess.size() - 1]<<endl;

}