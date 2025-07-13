#include<iostream>
using namespace std;
int main(){
    int a[10];
    int i,greatest;
    cout<<"Enter ten numbers: ";
    cout<<endl;
    for(int i=0;i<10;i++){
    cin>>a[10];}
    greatest=a[0];
    for(i=0;i<10;i++){
        if(a[i]>greatest){
            greatest=a[i];
        }
    }
    cout<<greatest<<"  is the greatest";
}
\\This code is not working properly.