#include<iostream>
using namespace std;

int main(){
    int num,s,i;
    cout<<"Enter the number"<<endl;
    cin>>num;
    s=0,i=1;
    while(i<num){
        if(num%i==0){
            s=s+i;
        }
        i++;
    }
    if(s==num){
        cout<<"Yes it is a perffect number";
    }
    else
    cout<<"No it is not a perfect number";
}