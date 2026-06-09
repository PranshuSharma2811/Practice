#include<iostream>
using namespace std;



int main(){
    int a[10][10],i,j,r,c;

    cout<<"Enter order of matrix"<<endl;
    cin>>c>>r;
    cout<<"Enter "<<r*c<<" values"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Elements of array are : "<<endl;
    for(i=0;i<r;i++){
        cout<<"\n";
        for(j=0;j<c;j++){
            cout<<a[i][j]<<"\t";
        }
    }
    return 0;
}