#include<iostream>
using namespace std;

bool ar(int j){
    int sum = true;
    for(int i =2;i<(j/2);i++){
        if(j%i==0){
            sum=false;
        }
    }
    return sum;
}

bool ans(int n,int m){
    int isitprime = false;
    if(ar(n)){
        if(ar(m)){
            isitprime = true;
        }
    }
    return isitprime;
}

int main(){
    int n ;
    cin>>n;
    for(int i =3;i<=n;i++){
        int answer = ans(i,i+2);
        if(answer){
            cout<<i<<" "<<i+2<<endl;
        }
    }
}