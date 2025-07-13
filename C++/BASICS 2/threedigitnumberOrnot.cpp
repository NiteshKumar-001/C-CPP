#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    if(n>99 and n<1000){
        //or in place of and we can use &&
        cout<<"Yes it is a 3digit number";
    }
    else{
        cout<<"No it is not a 3digit number";
    }
}