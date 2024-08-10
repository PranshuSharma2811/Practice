#include<iostream>
using namespace std;

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}



int main(){
    int n,m;
    cin>>n>>m;
    int ans = add(n,m);
    cout<<ans;
}