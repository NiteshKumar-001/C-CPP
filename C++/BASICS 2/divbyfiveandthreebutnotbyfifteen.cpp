#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the numbe: ";
    cin>>x;
    if(x%3==0 or x%5==0 && x%15==0){
        cout<<"Yes is divisible by 3 or 5 but not by 15";
    }
    else{
        cout<<"NO it is not divisible by 3 or 5 but may be it is divisible by fifteen";
    }
}