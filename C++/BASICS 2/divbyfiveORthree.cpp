#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    if(n%5==0 or n%3==0){
        //or in place of and we can use ||
        cout<<"Yes it is divisible by 3 or 5";
    }
    else{
        cout<<"No it is not divisible by 5 or 3";
    }
}