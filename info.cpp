#include<bits/stdc++.h>
using namespace std;

int minsub(int arr[],int n ){
    int sum=0;
    nth_element(arr,arr+0,arr+n);
    for(int i=0;i<n;i++){
        for(int k = i+1;k<n;k++){
            if(arr[i]==arr[k]){
                arr[k]+=1;
            }
        }
    }
    for(int j = 0;j<n;j++){
        sum+=arr[j];
    }
    return sum;
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = minsub(arr,n);
    cout<<ans;
}