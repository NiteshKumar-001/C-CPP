#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st Number : ";
    cin>>a;
     cout<<"enter  2nd number : ";
    cin>>b;
     cout<<"enter 3rd number : ";
    cin>>c;
    if(a<b and a<c) {
        //and in place of and we can use &&
        cout<<a;
    }
    if(b<a and b<c){
        cout<<b;
    }
    else{
        cout<<c;
    }
    cout<<" is the least";
}