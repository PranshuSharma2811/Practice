#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> name ;
    int input;
    cout<<"Enter some values // -1 to end values"<<endl;
    while(true){
        cin>>input;
        if(input==-1){
            break;
        }
        name.push_back(input);

    }
    for(int i =0;i<name.size();i++){
        cout<<name[i]<<endl;
    }
}