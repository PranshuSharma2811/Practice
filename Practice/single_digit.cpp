#include<iostream>
using namespace std;

int ans(int m){
    int sum=0;
    while(m>0){
        sum+=m%10;
        m=m/10;
    }
    return sum;
}

int main(){
    int n ;
    cin>>n;

    int answer = ans(n);
    while(answer >= 10){
        answer = ans(answer);
    }
    cout<<answer;
}