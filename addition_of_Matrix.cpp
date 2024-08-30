#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int a[10][10],b[10][10],d[10][10];
    int i,j,r,c,p,q;
    cout<<"Enter the order of matrix a : "<<endl;
    cin>>r>>c;
    cout<<"Enter "<<r*c<<" values ";
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    cout<<endl;
    cout<<"Enter order of matrix b : ";
    cin>>p>>q;

    cout<<"Enter "<<p*q<<" values";
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
    cin>>b[i][j];

    cout<<endl;
    cout<<"Elements of array a : ";
    for(i=0;i<r;i++){
        cout<<endl;
        for(j=0;j<c;j++)
        cout<<a[i][j]<<"\t";
    }
    cout<<"Elements of array b : ";
    for(i=0;i<p;i++){
        cout<<endl;
        for(j=0;j<q;j++)
        cout<<b[i][j]<<"\t";
    }
    if(r==p && c==q){
        for(i=0;i<r;i++){
            for(j=0;j<q;j++)
            d[i][j]=a[i][j]+b[i][j];
        }
        cout<<" Elements of array d : ";
        for(i=0;i<p;i++){
            cout<<"\n";
            for(j=0;j<q;j++)
            cout<<d[i][j]<<"\t";
            
        }
    }
    else{
        cout<<"\n Addition is not possible";
    }
}