#include<bits/stdc++.h>
using namespace std;

bool isLucky(int year, vector<int> &bannedDigits) {
    string yearStr = to_string(year);
    for (char digit : yearStr) {
        for (int banned : bannedDigits) {
            if (digit - '0' == banned) {
                return false;
            }
        }
    }
    return true;
}


int findYearX(int n, vector<int> d) {
    while (!isLucky(n, d)) {
        n++;
    }
    return n;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> d(k);
    for(int i =0;i<k;i++){
        cin>>d[i];
    }
    int result = findYearX(n,d);
    cout<<result;
}