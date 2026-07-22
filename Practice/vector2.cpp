#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    vector<string> name;
    int n =3;
    while (n--)
    {
        string st;
        cin>>st;
        name.push_back(st);
    }
    for(int i=0;i<3;i++){
        cout<<name[i]<<endl;
    }
    
}