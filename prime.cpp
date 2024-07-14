#include<iostream>
using namespace std;

int main(){
    int num,k,i;
    cout<<"Enter the number"<<endl;
    cin>>num;
    i=1,k=0;
    while(i<=num/2){
        if(num%i==0){
        k++;
        }
        i++;
    }
    if(k==1)
    cout<<"Prime";
    else 
    cout<<"Not Prime";
    
    return 0;
}