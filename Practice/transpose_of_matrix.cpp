#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    int transpose[3][3];
    cout<<"Enter the values of the matrix"<<endl;
    for(int i = 0 ;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i]=a[i][j];
        }
    }

    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
    }


}